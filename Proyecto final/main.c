//
//  main.c
//  Proyecto final
//
//  Created by Bernardo Ruiz & Rodrigo Alvarez on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz & Rodrigo Alvarez. All rights reserved.
//

//estado del juego
int juegofin = 0;
//estructura de datos del jugador
typedef struct Jugador1 {
   int vidas;
   int antorcha;
   int llave;
   int espada;
   char estado;
   int armadura;
   int monedas;
   int monedastotal;
   int score;
   char nombre[100];
} Jugador1;
//declaraciond e variables delta
  int deltarow = 0;
  int deltacol = 0;
//definicion de varviable del jugador
Jugador1 player;
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <mmsystem.h>
#include "assets/mapas.h"
#include "assets/mapa.h"
#include "assets/movimiento.h"
#include "assets/tienda.h"
#include "assets/score.h"

int main() {
  //nombre de la ventana
  SetConsoleTitle("The Boring Caves");
  //se establecen valores iniciales
  player.monedas = 10;
  player.monedastotal = 10;
  player.vidas = 3;
  player.antorcha = 5;
  player.estado='O';
  mapa2[32][0]=1;
  mapa2[32][1]=17;
  mapa3[32][0]=1;
  mapa3[32][1]=18;
  mapa4[32][0]=22;
  mapa4[32][1]=1;
  mapa5[32][0]=6;
  mapa5[32][1]=12;
  printf("Introduce tu nombre de usuario: \n");
  fflush(stdin);
  scanf("%s", &player.nombre);
  //se establecen la columna y filla actual del mapa
  actrow = mapa1[32][0];
  actcol = mapa1[32][1];
  //se establece el tamano de la ventan
  system("MODE 80,45");
  //se igualana las deltas de movimiento a la fila y columna actual
  deltarow = actrow;
  deltacol = actcol;
  //se carga el mapa 1
  cambiomapa(1);
  //se imprime la pantalla de inicio
  printinicio();
  init = 0;
    char ch = 0;
    int cont = 0;
    //ciclo del juego
    while (juegofin==0) {
      ch = getch();
      switch (ch) {
        //se presiona w
        case 119:
          moverArr();
          cont++;
          break;
        //se presiona s
        case 115:
          moverAba();
          cont++;
          break;
        //se presiona a
        case 97:
          moverIzq();
          cont++;
          break;
        //se presiona d
        case 100:
            moverDer();
            cont++;
            break;
        //se presiona q
        case 113:
            juegofin=3;
            break;
        //se presiona r
        case 114:
            placetorch();
            break;
        //se presiona i
        case 105:
            printinicio();
            break;
        //se presiona l
        case 108:
        if (matrizvisset==1) {
          matrizvisset = 0;
        }else{matrizvisset=1;}
        printmap();
            break;
        //se presiona u
        case 117:
          tienda();
          break;
        case 110:
          juegofin=1;
          break;
        case 109:
          nivel++;
          cambiomapa();
          break;
        default:
          printf("Esa tecla no hace ni madres\n");
          break;
    }
}
    //cuando se sale del ciclo se define cual fue la razon de salida
    switch (juegofin) {
      case 1:
        system("cls");
        printf("Has terminado el nivel");
        printf("\nPresiona cualquier tecla para continuar.");
        registerscore();
        getch();
        break;
      case 2:
        system("cls");
        printf("Perdistes HDP");
        printf("%d\n",player.vidas );
        PlaySound("GAMEOVER", NULL, SND_ASYNC | SND_RESOURCE);
        printf("\nPresiona cualquier tecla para continuar.");
        registerscore();
        getch();
        break;
      case 3:
        system("cls");
        printf("El usuario cerro el programa");
        printf("\nPresiona cualquier tecla para continuar.");
        getch();
        break;
    }
    //arriba 119
    //abajo 115
    //izq 97
    //der 100
}
