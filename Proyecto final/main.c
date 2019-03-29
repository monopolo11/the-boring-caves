//
//  main.c
//  Proyecto final
//
//  Created by Bernardo Ruiz & Rodrigo Alvarez on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz & Rodrigo Alvarez. All rights reserved.
//
int juegofin = 0;
int vidas = 3;
char jugador = 'O';
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "assets/mapa.h"
#include "assets/movimiento.h"

int main() {
  deltarow = actrow;
  deltacol = actcol;
  cambiomapa(1);
  init = 0;
    printmap();
    SetConsoleTextAttribute(hConsole, 10);
    printf("\nVidas: %d\n",vidas);
    char ch = 0;
    int cont = 0;
    while (juegofin==0) {
      ch = getch();
      switch (ch) {
        case 119:
          moverArr();
          cont++;
          break;
        case 115:
          moverAba();
          cont++;
          break;
        case 97:
          moverIzq();
          cont++;
          break;
        case 100:
            moverDer();
            cont++;
            break;
        case 113:
            juegofin=3;
            break;
        default:
          printf("Esa tecla no hace ni madres\n");
          break;
    }
    SetConsoleTextAttribute(hConsole, 10);
    printf("\nVidas: %d \n",vidas);
    if (llave==1) {
      SetConsoleTextAttribute(hConsole, 6);
      printf("El jugador tiene la llave\n");
    }
    if (espada==1) {
      SetConsoleTextAttribute(hConsole, 4);
      printf("El jugador tiene la espada\n");
    }
    if (vidas==0) {
      juegofin=2;
    }
    }
    switch (juegofin) {
      case 1:
        system("cls");
        printf("Has terminado el nivel");
        break;
      case 2:
        system("cls");
        printf("Perdistes HDP");
        break;
      case 3:
        system("cls");
        printf("El usuario cerro el programa");
        break;
    }
    //arriba 119
    //abajo 115
    //izq 97
    //der 100
}
