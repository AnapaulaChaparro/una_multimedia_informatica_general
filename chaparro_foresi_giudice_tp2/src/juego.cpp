#include "juego.h"
#include <cstdlib>
#include <cstdio>
#include <string>

Juego::Juego() : jugador(), laberinto(), jugando(true) {
    // Inicialización ncurses (esto ya estaba)
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);

    if (!has_colors()) {
        endwin();
        fprintf(stderr, "Terminal sin soporte de colores. Ejecutar en una terminal compatible.\n");
        std::exit(1);
    }
    start_color();
    use_default_colors();

    // Pares de colores: (índice, fg, bg)
    init_pair(1, COLOR_CYAN, COLOR_BLACK);   // paredes
    init_pair(2, COLOR_YELLOW, COLOR_BLACK); // jugador
    init_pair(3, COLOR_MAGENTA, COLOR_BLACK);// objetos
    init_pair(4, COLOR_BLACK, COLOR_WHITE);  // barra de estado

    // Verificar tamaño mínimo de terminal
    if (LINES < Laberinto::HEIGHT || COLS < Laberinto::WIDTH) {
        endwin();
        fprintf(stderr, "La terminal debe ser al menos %dx%d (cols x lines). Actualmente: %dx%d\n",
                Laberinto::WIDTH, Laberinto::HEIGHT, COLS, LINES);
        std::exit(1);
    }
}

Juego::~Juego() {
    endwin();
}

void Juego::iniciar() {
    jugando = true;
    // loop principal
    while (jugando) {
        dibujar();
        manejarEntrada();
        if (laberinto.objetosRestantes() == 0) {
            mostrarPantallaFinal(true);
            jugando = false;
        }
    }
}

void Juego::dibujar() {
    clear();
    laberinto.dibujar();
    jugador.dibujar();
    dibujarEstado();
    refresh();
}

void Juego::dibujarEstado() const {
    // Se dibuja la barra de estado en la parte superior, dentro del borde
    attron(COLOR_PAIR(4));
    // Construimos la linea de estado
    char buf[200];
    snprintf(buf, sizeof(buf), " Score: %d   Objetos restantes: %d   (q para salir) ",
             jugador.getScore(), laberinto.objetosRestantes());
    mvaddstr(0, 2, buf);
    attroff(COLOR_PAIR(4));
}

void Juego::manejarEntrada() {
    int tecla = getch();
    switch (tecla) {
        case KEY_UP:
        case 'w':
        case 'W':
            jugador.moverArriba(laberinto);
            break;
        case KEY_DOWN:
        case 's':
        case 'S':
            jugador.moverAbajo(laberinto);
            break;
        case KEY_LEFT:
        case 'a':
        case 'A':
            jugador.moverIzquierda(laberinto);
            break;
        case KEY_RIGHT:
        case 'd':
        case 'D':
            jugador.moverDerecha(laberinto);
            break;
        case 'q':
        case 'Q':
            jugando = false;
            mostrarPantallaFinal(false);
            break;
        default:
            break;
    }
}

void Juego::mostrarPantallaFinal(bool ganado) const {
    clear();
    std::string msg;
    if (ganado) msg = "¡¡GANASTE!! Has recogido todos los objetos.";
    else msg = "Gracias por jugar. (q para salir)";
    int cx = Laberinto::WIDTH / 2;
    int cy = Laberinto::HEIGHT / 2;

    attron(COLOR_PAIR(2) | A_BOLD);
    mvprintw(cy - 1, cx - static_cast<int>(msg.size()/2), "%s", msg.c_str());
    attroff(COLOR_PAIR(2) | A_BOLD);

    std::string info = "Presiona cualquier tecla para salir...";
    mvprintw(cy + 1, cx - static_cast<int>(info.size()/2), "%s", info.c_str());
    refresh();
    getch();
}
