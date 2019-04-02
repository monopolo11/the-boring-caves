//
//  main.c
//  Proyecto final
//
//  Created by Bernardo Ruiz & Rodrigo Alvarez on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz & Rodrigo Alvarez. All rights reserved.
//

//variable que establece el estado del juego
int juegofin = 0;
//estructura de datos para la variable del Jugador
typedef struct Jugador1 {
   int vidas;
   int antorcha;
   int llave;
   int espada;
   //estado es que letra sera el avatar del jugador
   char estado;
   int armadura;
   int monedas;
} Jugador1;
//declaracion de la variable del jugador
Jugador1 player;
<<<<<<< HEAD
//include de todas las librerias, las que tiene comillas son locales
=======
#include <time.h>
>>>>>>> b1f65ae0918c199ea61824ec5ddc0c749b5bc862
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>
#include "assets/mapas.h"
#include "assets/mapa.h"
#include "assets/movimiento.h"
#include "assets/tienda.h"

int main() {
  //poner el titulo de la ventana de consola
  SetConsoleTitle("The Boring Caves");
<<<<<<< HEAD
  //valores iniciales del jugador
=======
  player.monedas = 10;
>>>>>>> b1f65ae0918c199ea61824ec5ddc0c749b5bc862
  player.vidas = 3;
  player.antorcha = 5;
  player.estado='O';
  //se establece la columna y fila actual del jugador para el primer mapa
  actrow = mapa1[32][0];
  actcol = mapa1[32][1];
  //se establece el tamano de la ventana
  system("MODE 80,45");
  //se establece el delta de la col y fila para su proximo uso
  deltarow = actrow;
  deltacol = actcol;
  //se carga el mapa 1
  cambiomapa(1);
  //se imprime la pantalla de inicio
  printinicio();
  //variable para ver si se esta inisializando el programa (que se este corriendo por primera vez)
  init = 0;
  //ch es la variable de entrada
    char ch = 0;
    int cont = 0;
    //ciclo del juego, basado en el estado del juego con la variable juegofin
    while (juegofin==0) {
      //obtener tecla que se presiono
      ch = getch();
      switch (ch) {
        //se presiono w
        case 119:
          moverArr();
          cont++;
          break;
          //se presiono s
        case 115:
          moverAba();
          cont++;
          break;
          //se presiono a
        case 97:
          moverIzq();
          cont++;
          break;
          //se presiono d
        case 100:
            moverDer();
            cont++;
            break;
            //se presiono q
        case 113:
            juegofin=3;
            break;
            //se presiono r
        case 114:
            placetorch();
            break;
            //se presiono i
        case 105:
            printinicio();
            break;
            //se presiono l
        case 108:
        if (matrizvisset==1) {
          matrizvisset = 0;
        }else{matrizvisset=1;}
        printmap();
            break;
        case 117:
          tienda();
          break;
        default:
          printf("Esa tecla no hace ni madres\n");
          break;
    }
    }
    //salida del switch para imprimir la razon de salida
    switch (juegofin) {
      case 1:
        system("cls");
        printf("Has terminado el nivel");
        printf("\nPresiona cualquier tecla para continuar.");
        getch();
        break;
      case 2:
        system("cls");
        printf("Perdistes HDP");
        PlaySound("GAMEOVER", NULL, SND_ASYNC | SND_RESOURCE);
        printf("\nPresiona cualquier tecla para continuar.");
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
