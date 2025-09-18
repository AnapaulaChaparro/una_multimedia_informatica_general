#pragma once
#include <ncurses.h>
#include "jugador.h"
#include "laberinto.h"

class Juego {
public:
    Juego();
    ~Juego();
    void iniciar();

private:
    Jugador jugador;
    Laberinto laberinto;
    bool jugando;

    void dibujar();
    void manejarEntrada();
    void dibujarEstado() const;
    void mostrarPantallaFinal(bool ganado) const;
};
