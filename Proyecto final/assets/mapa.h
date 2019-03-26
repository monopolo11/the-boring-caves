//
//  mapa.h
//  Proyecto final
//
//  Created by Bernardo Ruiz on 25/3/19.
//  Copyright © 2019 Bernardo Ruiz. All rights reserved.
//

#ifndef mapa_h
#define mapa_h
#define rojo    "\x1b[31m"
#define verde   "\x1b[32m"
#define amarillo  "\x1b[33m"
#define azul    "\x1b[34m"
#define magenta "\x1b[35m"
#define cyan     "\x1b[36m"
#define reset   "\x1b[0m"
void printmap(){
int col, row,act;
int matriz[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {0,0,0,0,2,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,0,1},
    {1,1,1,1,1,1,1,0,0,1},
    {1,1,1,1,1,1,1,0,1,1},
    {1,1,1,1,1,1,1,0,1,1}
};
for (row=0; row!=10; row++) {
    printf("\n");
    for (col=0; col!=10; col++) {
        act=matriz[row][col];
        switch (act) {
            case 0:
                printf("  ");
                break;
            case 1:
                printf(rojo"* "reset);
                break;
            case 2:
                printf(azul"\u25A0 "reset);
                break;
        }
    }
}
printf("\n");
}
#endif /* mapa_h */
