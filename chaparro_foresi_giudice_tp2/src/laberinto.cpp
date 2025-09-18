#include "laberinto.h"
#include <cstdlib>
#include <ctime>

Laberinto::Laberinto() {
    grid.assign(HEIGHT, std::string(WIDTH, ' '));

    // Bordes exteriores
    for (int x = 0; x < WIDTH; ++x) {
        grid[0][x] = '#';
        grid[HEIGHT - 1][x] = '#';
    }
    for (int y = 0; y < HEIGHT; ++y) {
        grid[y][0] = '#';
        grid[y][WIDTH - 1] = '#';
    }

    
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < 400; ++i) {
        int rx = 1 + std::rand() % (WIDTH - 2);
        int ry = 1 + std::rand() % (HEIGHT - 2);
        if ((rx == 1 && ry == 1) || (rx == 2 && ry == 1) || (rx == 1 && ry == 2)) continue; // liberar zona inicio
        if (std::rand() % 100 < 65) grid[ry][rx] = '#';
    }

    int objetos = 10;
    for (int k = 0; k < objetos; ++k) {
        int ox, oy;
        do {
            ox = 1 + std::rand() % (WIDTH - 2);
            oy = 1 + std::rand() % (HEIGHT - 2);
        } while (grid[oy][ox] != ' ');
        grid[oy][ox] = 'o';
    }
}

void Laberinto::dibujar() const {
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            char c = grid[y][x];
            if (c == '#') {
                attron(COLOR_PAIR(1));
                mvaddch(y, x, '#');
                attroff(COLOR_PAIR(1));
            } else if (c == 'o') {
                attron(COLOR_PAIR(3) | A_BOLD);
                mvaddch(y, x, 'o');
                attroff(COLOR_PAIR(3) | A_BOLD);
            } else {
                mvaddch(y, x, ' ');
            }
        }
    }
}

bool Laberinto::puedeMover(int x, int y) const {
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return false;
    return grid[y][x] != '#';
}

bool Laberinto::recogerObjeto(int x, int y) {
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) return false;
    if (grid[y][x] == 'o') {
        grid[y][x] = ' ';
        return true;
    }
    return false;
}

int Laberinto::objetosRestantes() const {
    int c = 0;
    for (const auto &row : grid) {
        for (char ch : row) if (ch == 'o') ++c;
    }
    return c;
}
