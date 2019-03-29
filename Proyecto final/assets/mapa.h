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

int matriz[12][12] = {
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


int actrow = 2;
int actcol = 1;
void printmap(){
int col, row,act;
int cont = 0;
//while (cont!=10){
//  printf("\n");
//  cont++;
//}
//cont=0;
system("cls");
for (row=0; row!=12; row++) {
    printf("\n");
    for (col=0; col!=12; col++) {
        act=matriz[row][col];
        switch (act) {
            case 0:
                printf("  ");
                break;
            case 1:
                printf("* ");
                break;
            case 2:
                printf("O ");
                break;
            case 5:
              printf("y ");
              break;
            case 9:
                printf("- ");
                break;
            case 10:
                printf("- ");
                break;
            case 11:
                printf("| ");
                break;
        }
    }
}

}
#endif /* mapa_h */
