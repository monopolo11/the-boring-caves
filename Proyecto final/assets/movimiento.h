#ifndef movimiento_h
#define movimiento_h

void moverArr(){
  if (matriz[actrow-1][actcol]!=0) {
    printmap();
    printf("Movimiento invalido\n");
  }else{
    matriz[actrow][actcol]=0;
    matriz[actrow-1][actcol]=2;
    actrow=actrow-1;
    printmap();
  }
}

void moverAba(){
  if (matriz[actrow+1][actcol]!=0) {
    printmap();
    printf("Movimiento invalido\n");
  }else{
    matriz[actrow][actcol]=0;
    matriz[actrow+1][actcol]=2;
    actrow=actrow+1;
    printmap();
  }
}

void moverDer(){
  if (matriz[actrow][actcol+1]!=0) {
    printmap();
    printf("Movimiento invalido\n");
  }else{
    matriz[actrow][actcol]=0;
    matriz[actrow][actcol+1]=2;
    actcol=actcol+1;
    printmap();
  }
}

void moverIzq(){
  if (matriz[actrow][actcol-1]!=0) {
    printmap();
    printf("Movimiento invalido\n");
  }else{
    matriz[actrow][actcol]=0;
    matriz[actrow][actcol-1]=2;
    actcol=actcol-1;
    printmap();
  }
}
#endif /* mapa_h */
