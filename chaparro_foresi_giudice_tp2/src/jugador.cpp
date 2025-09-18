#include "jugador.h"

Jugador::Jugador() : x(1), y(1), score(0) {}

void Jugador::dibujar() const {
    attron(COLOR_PAIR(2) | A_BOLD);
    mvaddch(y, x, 'O');
    attroff(COLOR_PAIR(2) | A_BOLD);
}
void Jugador::moverArriba(Laberinto& laberinto) {
    int nx = x, ny = y - 1;
    if (laberinto.puedeMover(nx, ny)) {
        y = ny;
        if (laberinto.recogerObjeto(nx, ny)) ++score;
    }
}

void Jugador::moverAbajo(Laberinto& laberinto) {
    int nx = x, ny = y + 1;
    if (laberinto.puedeMover(nx, ny)) {
        y = ny;
        if (laberinto.recogerObjeto(nx, ny)) ++score;
    }
}

void Jugador::moverIzquierda(Laberinto& laberinto) {
    int nx = x - 1, ny = y;
    if (laberinto.puedeMover(nx, ny)) {
        x = nx;
        if (laberinto.recogerObjeto(nx, ny)) ++score;
    }
}

void Jugador::moverDerecha(Laberinto& laberinto) {
    int nx = x + 1, ny = y;
    if (laberinto.puedeMover(nx, ny)) {
        x = nx;
        if (laberinto.recogerObjeto(nx, ny)) ++score;
    }
}
