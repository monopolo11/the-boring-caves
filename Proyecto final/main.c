//
//  main.c
//  Proyecto final
//
//  Created by Bernardo Ruiz & Rodrigo Alvarez on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz & Rodrigo Alvarez. All rights reserved.
//
int juegofin = 0;
typedef struct Jugador1 {
   int vidas;
   int antorcha;
   int llave;
   int espada;
   char estado;
   int armadura;
} Jugador1;
Jugador1 player;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "assets/mapas.h"
#include "assets/mapa.h"
#include "assets/movimiento.h"

int main() {
  player.vidas = 3;
  player.antorcha = 5;
  player.estado='O';
  actrow = mapa1[32][0];
  actcol = mapa1[32][1];
  system("MODE 80,45");
  deltarow = actrow;
  deltacol = actcol;
  cambiomapa(1);
  printinicio();
  init = 0;
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
        case 114:
            placetorch();
            break;
        case 105:
            printinicio();
            break;
        case 108:
        if (matrizvisset==1) {
          matrizvisset = 0;
        }else{matrizvisset=1;}
        printmap();
            break;
        default:
          printf("Esa tecla no hace ni madres\n");
          break;
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
        printf("\a");
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
