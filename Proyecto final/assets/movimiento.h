#ifndef movimiento_h
#define movimiento_h
int llave = 0;

void makevis(){
  matrizvis[actrow-1][actcol-1]=1;
  matrizvis[actrow-1][actcol]=1;
  matrizvis[actrow-1][actcol+1]=1;
  matrizvis[actrow][actcol-1]=1;
  matrizvis[actrow][actcol]=1;
  matrizvis[actrow][actcol+1]=1;
  matrizvis[actrow+1][actcol-1]=1;
  matrizvis[actrow+1][actcol]=1;
  matrizvis[actrow+1][actcol+1]=1;

  matrizvis[actrow-2][actcol-2]=1;
  matrizvis[actrow-2][actcol]=1;
  matrizvis[actrow-2][actcol+2]=1;
  matrizvis[actrow][actcol-2]=1;
  matrizvis[actrow][actcol]=1;
  matrizvis[actrow][actcol+2]=1;
  matrizvis[actrow+2][actcol-2]=1;
  matrizvis[actrow+2][actcol]=1;
  matrizvis[actrow+2][actcol+2]=1;
}

void moverArr(){
  int casilla = matriz[actrow-1][actcol];
  switch (casilla) {
    case 0:
      matriz[actrow][actcol]=0;
      matriz[actrow-1][actcol]=2;
      makevis();
      actrow=actrow-1;
      printmap();
      break;
    case 5:
    matriz[actrow][actcol]=0;
    matriz[actrow-1][actcol]=2;
    makevis();
    actrow=actrow-1;
    llave = 1;
    printmap();
    default:
      printmap();
      printf("Movimiento invalido\n\a");
      break;
  }
}

void moverAba(){
  int casilla = matriz[actrow+1][actcol];
  switch (casilla) {
    case 0:
      matriz[actrow][actcol]=0;
      matriz[actrow+1][actcol]=2;
      makevis();
      actrow=actrow+1;
      printmap();
      break;
    case 5:
      matriz[actrow][actcol]=0;
      matriz[actrow+1][actcol]=2;
      makevis();
      actrow=actrow+1;
      llave = 1;
      printmap();
      break;
    case 9:
        if (llave==1) {
          juegofin=1;
          break;
        }else{printf("Te falta la llave");break;}
        printmap();
        break;
    default:
      printmap();
      printf("Movimiento invalido\n\a");
      break;
  }
}

void moverDer(){
  int casilla = matriz[actrow][actcol+1];
  switch (casilla) {
    case 0:
      matriz[actrow][actcol]=0;
      matriz[actrow][actcol+1]=2;
      makevis();
      actcol=actcol+1;
      printmap();
      break;
      case 5:
        matriz[actrow][actcol]=0;
        matriz[actrow][actcol+1]=2;
        makevis();
        actcol=actcol+1;
        llave = 1;
        printmap();
        break;
      case 9:
          if (llave==1) {
            juegofin=1;
            break;
          }else{printf("Te falta la llave");break;}
          printmap();
          break;
    default:
      printmap();
      printf("Movimiento invalido\n\a");
      break;
  }
}

void moverIzq(){
  int casilla = matriz[actrow][actcol-1];
  switch (casilla) {
    case 0:
      matriz[actrow][actcol]=0;
      matriz[actrow][actcol-1]=2;
      makevis();
      actcol=actcol-1;
      printmap();
      break;
      case 5:
        matriz[actrow][actcol]=0;
        matriz[actrow][actcol-1]=2;
        makevis();
        actcol=actcol-1;
        llave = 1;
        printmap();
        break;
      case 9:
          if (llave==1) {
            juegofin=1;
            break;
          }else{printf("Te falta la llave");break;}
          printmap();
          break;
    default:
      printmap();
      printf("Movimiento invalido\n\a");
      break;
  }
}
#endif /* mapa_h */
