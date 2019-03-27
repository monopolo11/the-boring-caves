//
//  main.c
//  Proyecto final
//
//  Created by Bernardo Ruiz & Rodrigo Alvarez on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz & Rodrigo Alvarez. All rights reserved.
//
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#include "assets/mapa.h"
#include "assets/movimiento.h"


int main() {
    printmap();
    char ch = 0;
    int cont = 0;
    while (cont!=20) {
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

    }
    //arriba 119
    //abajo 115
    //izq 97
    //der 100
}
