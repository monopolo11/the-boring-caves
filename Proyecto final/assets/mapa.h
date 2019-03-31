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
//#define amarillo  "\x1b[32m"
//#define azul    "\x1b[34m"
//#define magenta "\x1b[35m"
//#define cyan     "\x1b[36m"
//#define reset   "\x1b[0m"
HANDLE  hConsole;

int llavetemp=0;
int nivel = 1;
int cueva = 0;

//Habilita o desahabilita que se oculte el mapa
int matrizvisset = 1;
int init = 1;
int col,row;
int actrow;
int actcol;

void mapasave(){
  if(cueva!=1){
  switch (nivel) {
    case 1:
    mapa1[32][0]=actrow;
    mapa1[32][1]=actcol;
    mapa1[actrow][actcol]=2;
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          mapa1[row][col]=matriz[row][col];
        }
      }
      //guarda matris de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            mapa1_vis[row][col]=matrizvis[row][col];
          }
        }
        break;
    case 2:
    mapa2[32][0]=actrow;
    mapa2[32][1]=actcol;
    mapa2[actrow][actcol]=2;
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          mapa2[row][col]=matriz[row][col];
        }
      }
      //guarda matris de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            mapa2_vis[row][col]=matrizvis[row][col];
          }
        }
        break;
      case 3:
        juegofin=1;
        break;
  }
}else{
  switch (nivel) {
    case 1:
    mapa1_1[32][0]=actrow;
    mapa1_1[32][1]=actcol;
    mapa1_1[actrow][actcol]=2;
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          mapa1_1[row][col]=matriz[row][col];
        }
      }
      //guarda matris de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            mapa1_1_vis[row][col]=matrizvis[row][col];
          }
        }
        break;
    case 2:
    mapa1_1[32][0]=actrow;
    mapa1_1[32][1]=actcol;
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          mapa1_1[row][col]=matriz[row][col];
        }
      }
      //guarda matris de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            mapa1_1_vis[row][col]=matrizvis[row][col];
          }
        }
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
    player.llave = 0;}
  switch (nivel) {
    case 1:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa1[row][col];
        }
      }
      actrow = mapa1[32][0];
      actcol = mapa1[32][1];
        //carga matriz de visibilidad
        for (row=0; row!=32; row++) {
            for (col=0; col!=32; col++) {
              matrizvis[row][col]=mapa1_vis[row][col];
            }
          }
        break;
    case 2:
    mapa2[32][0]=2;
    mapa2[32][1]=2;
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa2[row][col];
        }
      }
      mapa2[32][0]=2;
      mapa2[32][1]=2;
      actrow = mapa2[32][0];
      actcol = mapa1[32][1];
      //carga matriz de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            matrizvis[row][col]=mapa2_vis[row][col];
          }
        }
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
      actrow = mapa1_1[32][0];
      actcol = mapa1_1[32][1];
      //carga matriz de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            matrizvis[row][col]=mapa1_1_vis[row][col];
          }
        }
        break;
    case 2:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa1_1[row][col];
        }
      }
      actrow = mapa1_1[32][0];
      actcol = mapa1_1[32][1];
      //carga matriz de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            matrizvis[row][col]=mapa1_1_vis[row][col];
          }
        }
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
          printf("%c ",player.estado);
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
      case 13:
          SetConsoleTextAttribute(hConsole, 4);
          printf("A ");
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
player.estado -   2             - 0
player.llave -     5             - y
Puerta -    9             - h
Borde Horizontal - 10     - -
Borde Vertical - 10     - |

*/

  switch (player.vidas) {
    case 3:
      player.estado='O';
      break;
    case 2:
      player.estado='o';
      break;
    case 1:
      player.estado='.';
      break;
    case 5:
      player.estado='Q';
      break;
    }
system("cls");
for (row=0; row!=32; row++) {
    printf("\n");
    for (col=0; col!=32; col++) {
        act=matriz[row][col];
        if (matrizvisset==1){
        if(matrizvis[row][col]==0){
          printf("  ");
    }else{printmapchar(matriz[row][col]);}
  }else{
    printmapchar(matriz[row][col]);
  }
}
}
SetConsoleTextAttribute(hConsole, 7);
printf("\nNivel: %d \n",nivel);
if(cueva==1){
  SetConsoleTextAttribute(hConsole, 7);
  printf("Cueva: Si \n");}else{SetConsoleTextAttribute(hConsole, 7);
  printf("Cueva: No \n");}
  SetConsoleTextAttribute(hConsole, 10);
SetConsoleTextAttribute(hConsole, 10);
printf("Vidas: %d\n",player.vidas);
printf("Antorchas: %d \n",player.antorcha);
if (player.llave==1) {
  SetConsoleTextAttribute(hConsole, 6);
  printf("El Jugador tiene la llave\n");
}
if (player.espada==1) {
  SetConsoleTextAttribute(hConsole, 4);
  printf("El Jugador tiene la espada\n");
}
if (player.armadura==1) {
  SetConsoleTextAttribute(hConsole, 4);
  printf("El Jugador tiene la armadura\n");
}
if (player.vidas==0) {
  juegofin=2;
}
}
void printinicio(){
  PlaySound("sounds/main.wav", NULL, SND_ASYNC | SND_FILENAME);
  system("cls");
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 7);
  printf("Bienvenido a este juego\n");
  printf("Instrucciones:\n");
  printf("Tus movimientos seran con ");
  SetConsoleTextAttribute(hConsole, 2);
  printf("W,A,S,D\n");
  SetConsoleTextAttribute(hConsole, 7);
  printf("Si quieres poner una antorcha para dejar visible esa area preciona ");
  SetConsoleTextAttribute(hConsole, 2);
  printf("R\n");
  SetConsoleTextAttribute(hConsole, 7);
  printf("Si en cualquier momento deseas volver a ver esta pantalla presiona ");
  SetConsoleTextAttribute(hConsole, 2);
  printf("I\n");
  SetConsoleTextAttribute(hConsole, 7);
  printf("Suerte en tu aventura, intenta descubrir los diferentes secretos escondidos\n en los mapa\n");
  printf("Leyenda:\n");
  SetConsoleTextAttribute(hConsole, 2);
  printf("* ");
  SetConsoleTextAttribute(hConsole, 7);printf("Muros\n");
  SetConsoleTextAttribute(hConsole, 7);
  printf("%c ",player.estado);
  SetConsoleTextAttribute(hConsole, 7);printf("Tu avatar\n");
  SetConsoleTextAttribute(hConsole, 6);
  printf("y ");
  SetConsoleTextAttribute(hConsole, 7);printf("Una player.llave, la necesitaras para pasar por la puerta\n");
  SetConsoleTextAttribute(hConsole, 4);
  printf("F ");
  SetConsoleTextAttribute(hConsole, 7);printf("Un enemigo\n");
  SetConsoleTextAttribute(hConsole, 4);
  printf("+ ");
  SetConsoleTextAttribute(hConsole, 7);printf("Una player.espada, la necesitaras para pasar por los enemigos\n");
  SetConsoleTextAttribute(hConsole, 4);
  printf("A ");
  SetConsoleTextAttribute(hConsole, 7);printf("Una armadura, la necesitaras para pasar por los enemigos\n");
  SetConsoleTextAttribute(hConsole, 6);
  printf("H ");
  SetConsoleTextAttribute(hConsole, 7);printf("Una Puerta\n");
  SetConsoleTextAttribute(hConsole, 4);
  printf("D ");
  SetConsoleTextAttribute(hConsole, 7);printf("Un dragon, invencible excepto si tienes lo necesario\n");
  SetConsoleTextAttribute(hConsole, 14);
  printf("E ");
  SetConsoleTextAttribute(hConsole, 7);printf("Escaleras\n");
  printf("\nPresiona cualquier tecla para continuar...");
  getch();
  printmap();
    PlaySound(NULL,NULL,SND_PURGE);
}


#endif /* mapa_h */
