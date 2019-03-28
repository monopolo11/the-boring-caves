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
int nivel = 1;
int mapa1[12][12] ={
  {10,10,10,10,10,10,10,10,10,10,10,0},
  {11,1,1,1,1,1,1,1,1,1,11},
  {11,2,0,0,0,0,1,1,1,1,11},
  {11,1,1,1,1,0,1,1,1,1,11},
  {11,1,0,0,0,0,0,0,5,1,11},
  {11,1,0,1,1,1,1,1,1,1,11},
  {11,1,0,0,0,0,0,0,0,1,11},
  {11,1,0,1,1,1,1,0,1,1,11},
  {11,1,0,0,0,1,1,1,1,1,11},
  {11,1,1,1,0,0,0,0,0,1,11},
  {11,1,1,1,1,1,1,9,1,1,11},
  {10,10,10,10,10,10,10,10,10,10,10,0}
};

int mapa2[12][12] ={
  {10,10,10,10,10,10,10,10,10,10,10,0},
  {11,1,1,1,1,1,1,1,1,1,11},
  {11,2,0,1,1,1,1,1,5,1,11},
  {11,0,0,1,1,1,1,1,0,1,11},
  {11,0,0,0,0,0,0,0,0,1,11},
  {11,1,0,1,1,1,1,1,1,1,11},
  {11,1,0,0,0,0,0,0,0,1,11},
  {11,1,0,1,1,1,1,0,1,1,11},
  {11,1,0,0,0,1,0,0,0,9,11},
  {11,1,1,1,0,0,0,1,1,1,11},
  {11,1,1,1,1,1,1,1,1,1,11},
  {10,10,10,10,10,10,10,10,10,10,10,0}
};

int matriz[12][12];

int matrizvisres[12][12] = {
  {1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,0,0,0,0,0,0,0,1},
  {1,1,1,0,0,0,0,0,0,0,1},
  {1,1,1,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,5,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1}
};

int matrizvis[12][12] = {
  {1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,0,0,0,0,0,0,0,1},
  {1,1,1,0,0,0,0,0,0,0,1},
  {1,1,1,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,5,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1}
};
//Habilita o desahabilita que se oculte el mapa
int matrizvisset = 1;

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

void cambiomapa(int nivel){
  llave = 0;
  switch (nivel) {
    case 1:
    for (row=0; row!=12; row++) {
        for (col=0; col!=12; col++) {
          matriz[row][col]=mapa1[row][col];
        }
      }
        actrow = 2;
        actcol = 1;
        resetmatrizvis();
        break;
    case 2:
    for (row=0; row!=12; row++) {
        for (col=0; col!=12; col++) {
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
Puerta -    9             - y
Borde Horizontal - 10     - -
Borde Vertical - 10     - |

*/
system("cls");
for (row=0; row!=12; row++) {
    printf("\n");
    for (col=0; col!=12; col++) {
        act=matriz[row][col];
        if (matrizvisset==1){
        if(matrizvis[row][col]==1){
          switch (act) {
              case 0:
                  printf("  ");
                  break;
              case 1:
              hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, 2);
                  printf("* ");
                  break;
              case 2:
              hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, 7);
                  printf("O ");
                  break;
              case 5:
              hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, 6);
                printf("y ");
                break;
              case 9:
              hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, 6);
                  printf("H ");
                  break;
              case 10:
              hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, 3);
                  printf("- ");
                  break;
              case 11:
              hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, 3);
                  printf("| ");
                  break;
          }
    }else{printf("  ");}
  }else{
    switch (act) {
      case 0:
          printf("  ");
          break;
      case 1:
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hConsole, 2);
          printf("* ");
          break;
      case 2:
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hConsole, 7);
          printf("O ");
          break;
      case 5:
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hConsole, 6);
        printf("y ");
        break;
      case 9:
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hConsole, 6);
          printf("H ");
          break;
      case 10:
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hConsole, 3);
          printf("- ");
          break;
      case 11:
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hConsole, 3);
          printf("| ");
          break;
  }
}
}
}

}
#endif /* mapa_h */
