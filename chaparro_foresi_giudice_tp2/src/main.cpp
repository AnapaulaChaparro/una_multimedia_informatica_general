#include <iostream>
#include <ncurses.h>
#include "juego.h"

using namespace std;

void pantallaInicio() {
    initscr();            
    noecho();             
    curs_set(0);          

    int maxY, maxX;
    getmaxyx(stdscr, maxY, maxX); 

    // ASCII grande que dice ESCAPA Y GANA
    string titulo[] = {
        " ███████╗███████╗ ██████╗  █████╗ ██████╗  █████╗  ",
        " ██╔════╝██╔════╝██╔════╝ ██╔══██╗██╔══██╗██╔══██╗ ",
        " █████╗  ███████╗██║     ╗███████║██████╔╝███████║ ",
        " ██╔══╝  ╚════██║██║   ██║██╔══██║██╔═══╝ ██╔══██║ ",
        " ███████╗███████║╚██████╔╝██║  ██║██║     ██║  ██║ ",
        " ╚══════╝╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝  ╚═╝ "
    };

    int startY = maxY/2 - 6;  
    int startX = (maxX - (int)titulo[0].size()) / 2;

    for (int i = 0; i < 6; i++) {
        mvprintw(startY + i, startX, "%s", titulo[i].c_str());
    }

    // Instrucciones del juego
    mvprintw(startY + 8, (maxX/2) - 15, "Usa las flechas para moverte");
    mvprintw(startY + 9, (maxX/2) - 15, "Evita los obstaculos y sobrevive");
    mvprintw(startY + 10, (maxX/2) - 15, "Presiona cualquier tecla para comenzar");

    refresh();
    getch();   

    endwin();  
}

int main() {
    pantallaInicio();  

    Juego juego;
    juego.iniciar();   
    return 0;
}

