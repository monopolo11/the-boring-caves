//
//  main.c
//  Proyecto final
//
//  Created by Bernardo Ruiz & Rodrigo Alvarez on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz & Rodrigo Alvarez. All rights reserved.
//
int juegofin = 0;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "assets/mapa.h"
#include "assets/movimiento.h"
int main() {
    cambiomapa(1);
    printmap();
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
    }
    if (llave==1) {
      printf("El jugador tiene la llave");
    }
    if (cont>100) {
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
          printf("Perdiste HDP");
          break;
    }

    //arriba 119
    //abajo 115
    //izq 97
    //der 100
}
