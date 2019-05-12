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
//se establece el handle para colores
HANDLE  hConsole;
//se establecen las variables
int llavetemp=0;
int nivel = 1;
int cueva = 0;

//Habilita o desahabilita que se oculte el mapa
int matrizvisset = 1;
//se cambia la variable de inisializacion del programa
int init = 1;
int col,row;
int actrow;
int actcol;

//esta funcion guarda los cambios de la matriz a su matriz original
void mapasave(){
  if(cueva!=1){
    //si no es cueva
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
      mapa3[32][0]=actrow;
      mapa3[32][1]=actcol;
      mapa3[actrow][actcol]=2;
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            mapa3[row][col]=matriz[row][col];
          }
        }
        //guarda matris de visibilidad
        for (row=0; row!=32; row++) {
            for (col=0; col!=32; col++) {
              mapa3_vis[row][col]=matrizvis[row][col];
            }
          }
          break;
  }
}else{
  //si es cueva
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
//esta funcion carga la matriz del mapa a la amtriz que se utiliza durante el juego (matriz)
void cambiomapa(){
  for (row=0; row!=32; row++) {
      for (col=0; col!=32; col++) {
        matriz[row][col]=0;
      }
    }
  if(cueva!=1){
    //si no es cueva
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
          startvis();
        break;
    case 2:
    for (row=0; row!=32; row++) {
        for (col=0; col!=32; col++) {
          matriz[row][col]=mapa2[row][col];
        }
      }
      actrow = mapa2[32][0];
      actcol = mapa2[32][1];
      deltarow=actrow;
      deltacol=actcol;
      //carga matriz de visibilidad
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            matrizvis[row][col]=0;
          }
        }
        startvis();
        break;
      case 3:
      for (row=0; row!=32; row++) {
          for (col=0; col!=32; col++) {
            matriz[row][col]=mapa3[row][col];
          }
        }
        actrow = mapa3[32][0];
        actcol = mapa3[32][1];
        deltarow=actrow;
        deltacol=actcol;
        //carga matriz de visibilidad
        for (row=0; row!=32; row++) {
            for (col=0; col!=32; col++) {
              matrizvis[row][col]=0;
            }
          }
          startvis();
          break;
        case 4:
          for (row=0; row!=32; row++) {
              for (col=0; col!=32; col++) {
                matriz[row][col]=mapa4[row][col];
              }
            }
            actrow = mapa4[32][0];
            actcol = mapa4[32][1];
            deltarow=actrow;
            deltacol=actcol;
            //carga matriz de visibilidad
            for (row=0; row!=32; row++) {
                for (col=0; col!=32; col++) {
                  matrizvis[row][col]=0;
                }
              }
              startvis();
              break;
          case 5:
                for (row=0; row!=32; row++) {
                    for (col=0; col!=32; col++) {
                      matriz[row][col]=mapa5[row][col];
                    }
                  }
                  actrow = mapa5[32][0];
                  actcol = mapa5[32][1];
                  deltarow=actrow;
                  deltacol=actcol;
                  //carga matriz de visibilidad
                  for (row=0; row!=32; row++) {
                      for (col=0; col!=32; col++) {
                        matrizvis[row][col]=2;
                      }
                    }
                    startvis();
                    break;
  }
}else{
  //si es cueva
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
        startvis();
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
        startvis();
        break;
      case 3:
        juegofin=1;
        break;
  }
}
}
//esta funcion imprime el mapa basado en su valor en matriz SetConsoleTextAttribute(hConsole, 2); cambia el color del texto
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
      case 66:
          SetConsoleTextAttribute(hConsole, 4);
          printf("X ");
          break;
      case 43:
          SetConsoleTextAttribute(hConsole, 10);
          printf("G ");
          break;
      case 31:
          SetConsoleTextAttribute(hConsole, 4);
          printf("* ");
          break;
      case 45:
          SetConsoleTextAttribute(hConsole, 4);
          printf("J ");
          break;
}
}
//esta funcion imprime el mapa
void printmap(){
int act;
int cont = 0;
//estado del jugador, cual es su avatar
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
//se limpia la pantalla
system("cls");
//en este for se recorre toda la matriz y se imprime llamando a printmapchar segun el valor de la matriz en esa pocision
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
//se imprimen los textos fijos como vidas, espada monedas etc.
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
SetConsoleTextAttribute(hConsole, 6);
printf("%s tiene: %d monedas\n",player.nombre,player.monedas);
if (player.llave==1) {
  SetConsoleTextAttribute(hConsole, 6);
  printf("%s tiene la llave\n",player.nombre);
}
if (player.espada==1) {
  SetConsoleTextAttribute(hConsole, 4);
  printf("%s tiene la espada\n",player.nombre);
}
if (player.armadura==1) {
  SetConsoleTextAttribute(hConsole, 4);
  printf("$s tiene la armadura\n",player.nombre);
}
printf("col: %d\n",actcol);
printf("row: %d\n",actrow);
printf("deltacol: %d\n",deltacol);
printf("deltarow: %d\n",deltarow);
if (player.vidas==0) {
  juegofin=2;
}
}
//impresion de la pantalla de inicio y de informacion
void printinicio(){
  PlaySound("MAIN", NULL, SND_ASYNC | SND_RESOURCE);
  system("cls");
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 7);
  printf("Bienvenido a The Boring Caves\n");
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
  SetConsoleTextAttribute(hConsole, 7);printf("Una llave, la necesitaras para pasar por la puerta\n");
  SetConsoleTextAttribute(hConsole, 4);
  printf("F ");
  SetConsoleTextAttribute(hConsole, 7);printf("Un enemigo\n");
  SetConsoleTextAttribute(hConsole, 4);
  printf("+ ");
  SetConsoleTextAttribute(hConsole, 7);printf("Una espada, la necesitaras para pasar por los enemigos\n");
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
  //tiempo de espera de la primera corrida del programa
  //if(init!=0){sleep(5);}
  printf("\nPresiona cualquier tecla para continuar...");
  getch();
  printmap();
  PlaySound(NULL,NULL,SND_PURGE);
}
//variable que mueve enemigos
void moveEnemy(){
  int movedelta = 0;
  //seed y variable random
  time_t t;
  srand((unsigned) time(&t));
  //por cada valor en matriz se verifica que sea un enemigo, si lo es se intentara mover basado en elk movedelta aleatoirio si no intntara otra direccion
  for (row=0; row!=32; row++) {
      for (col=0; col!=32; col++) {
        if(matriz[row][col]==6||matriz[row][col]==12){
        movedelta = rand() % 4;
        switch (movedelta) {
          case 0:
            if (matriz[row][col+1]==0) {
              matriz[row][col+1]=matriz[row][col];
              matriz[row][col]=0;
              break;
            }else{}
          case 1:
            if (matriz[row][col-1]==0) {
              matriz[row][col-1]=matriz[row][col];
              matriz[row][col]=0;
              break;
            }else{}
          case 2:
              if (matriz[row+1][col]==0) {
                matriz[row+1][col]=matriz[row][col];
                matriz[row][col]=0;
                break;
              }else{}
            case 3:
              if (matriz[row-1][col]==0) {
                matriz[row-1][col]=matriz[row][col];
                matriz[row][col]=0;
                break;
              }
        }
      }
    }
}
}

#endif /* mapa_h */
