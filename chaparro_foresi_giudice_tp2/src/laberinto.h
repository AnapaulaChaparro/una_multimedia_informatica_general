#pragma once
#include <ncurses.h>
#include <vector>
#include <string>

class Laberinto {
public:
    static const int WIDTH = 120;
    static const int HEIGHT = 40;
    Laberinto();
    void dibujar() const;
    bool puedeMover(int x, int y) const;
    // devuelve true si había un objeto y lo recoge
    bool recogerObjeto(int x, int y);
    int objetosRestantes() const;

private:
    std::vector<std::string> grid; // grid[filas][columnas]
};
