#pragma once
#include <ncurses.h>
#include "laberinto.h"

class Jugador {
public:
    Jugador();
    void dibujar() const;
    void moverArriba(Laberinto& laberinto);
    void moverAbajo(Laberinto& laberinto);
    void moverIzquierda(Laberinto& laberinto);
    void moverDerecha(Laberinto& laberinto);

    int getX() const { return x; }
    int getY() const { return y; }
    int getScore() const { return score; }

private:
    int x, y;
    int score;
};
