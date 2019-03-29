//
//  mapa.h
//  Proyecto final
//
//  Created by Bernardo Ruiz on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz. All rights reserved.
//

#ifndef mapa_h
#define mapa_h

//#define rojo    "\x1b[31m"
//#define verde   "\x1b[32m"
//#define amarillo  "\x1b[33m"
//#define azul    "\x1b[34m"
//#define magenta "\x1b[35m"
//#define cyan     "\x1b[36m"
//#define reset   "\x1b[0m"
HANDLE  hConsole;
int llave = 0;
int llavetemp=0;
int nivel = 1;
int cueva = 0;
int espada = 0;

//Habilita o desahabilita que se oculte el mapa
int matrizvisset = 0;
int init = 1;
int col,row;
int actrow = 2;
int actcol = 1;

void resetmatrizvis(){
  for (row=0; row!=12; row++) {
      for (col=0; col!=12; col++) {
        matrizvis[row][col]=matrizvisres[row][col];
      }
    }
}

void mapasave(){
  mapa1[2][1]=2;
  mapa1_1[2][1]=2;
  mapa2[2][1]=2;
  if(cueva!=1){
  switch (nivel) {
    case 1:
    for (row=0; row!=12; row++) {
        for (col=0; col!=12; col++) {
          mapa1[row][col]=matriz[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
    case 2:
    for (row=0; row!=12; row++) {
        for (col=0; col!=12; col++) {
          mapa2[row][col]=matriz[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
      case 3:
        juegofin=1;
        break;
  }
}else{
  switch (nivel) {
    case 1:
    for (row=0; row!=12; row++) {
        for (col=0; col!=12; col++) {
          mapa1_1[row][col]=matriz[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
    case 2:
    for (row=0; row!=12; row++) {
        for (col=0; col!=12; col++) {
          mapa1_1[row][col]=matriz[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
      case 3:
        juegofin=1;
        break;
  }
}
}

void cambiomapa(){
  if(cueva!=1){
    if(llavetemp!=1){
    llave = 0;}
  switch (nivel) {
    case 1:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa1[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
    case 2:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa2[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
      case 3:
        juegofin=1;
        break;
  }
}else{
  switch (nivel) {
    case 1:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa1_1[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
    case 2:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa1_1[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
      case 3:
        juegofin=1;
        break;
  }
}
}

void printmapchar(int valormat){
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  switch (valormat) {
      case 0:
          printf("  ");
          break;
      case 1:
       SetConsoleTextAttribute(hConsole, 2);
          printf("* ");
          break;
      case 2:
       SetConsoleTextAttribute(hConsole, 7);
          printf("%c ",jugador);
          break;
      case 3:
           SetConsoleTextAttribute(hConsole, 8);
              printf("* ");
              break;
      case 5:
       SetConsoleTextAttribute(hConsole, 6);
        printf("y ");
        break;
      case 6:
         SetConsoleTextAttribute(hConsole, 4);
          printf("F ");
          break;
      case 7:
             SetConsoleTextAttribute(hConsole, 4);
              printf("+ ");
              break;
      case 9:
       SetConsoleTextAttribute(hConsole, 6);
          printf("H ");
          break;
      case 10:
          SetConsoleTextAttribute(hConsole, 3);
          printf("- ");
          break;
      case 11:
        SetConsoleTextAttribute(hConsole, 3);
        printf("| ");
        break;
      case 12:
          SetConsoleTextAttribute(hConsole, 4);
          printf("D ");
          break;
      case 21:
        SetConsoleTextAttribute(hConsole, 14);
        printf("E ");
        break;
      case 22:
          SetConsoleTextAttribute(hConsole, 14);
          printf("E ");
          break;
      case 24:
          SetConsoleTextAttribute(hConsole, 2);
          printf("* ");
          break;
}
}

void printmap(){
int act;
int cont = 0;
//while (cont!=10){
//  printf("\n");
//  cont++;
//}
//cont=0;
/*
item - Valor en matriz - representacion grafica
Camino -    0             -
Muros -     1             - *
Jugador -   2             - 0
Llave -     5             - y
Puerta -    9             - h
Borde Horizontal - 10     - -
Borde Vertical - 10     - |

*/
switch (vidas) {
  case 3:
    jugador='O';
    break;
  case 2:
    jugador='o';
    break;
  case 1:
    jugador='.';
    break;
  }
system("cls");
for (row=0; row!=32; row++) {
    printf("\n");
    for (col=0; col!=32; col++) {
        act=matriz[row][col];
        if (matrizvisset==1){
        if(matrizvis[row][col]==1){
          printmapchar(matriz[row][col]);
    }else{printf("  ");}
  }else{
    printmapchar(matriz[row][col]);
  }
}
}
}


#endif /* mapa_h */
