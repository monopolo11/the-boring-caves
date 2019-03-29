#ifndef movimiento_h
#define movimiento_h
  int deltarow = 0;
  int deltacol = 0;
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

<<<<<<< HEAD
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

=======
>>>>>>> 2bc3a608d9ab7480b4fcf71d0d57e35aa359324e
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

<<<<<<< HEAD
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
=======
void movecheck(int dir){
  switch (dir) {
    case 0:
      deltarow=deltarow-1;
      deltacol = actcol;
      break;
    case 1:
      deltarow=deltarow+1;
      deltacol = actcol;
>>>>>>> 2bc3a608d9ab7480b4fcf71d0d57e35aa359324e
      break;
    case 2:
        deltacol=deltacol+1;
        deltarow = actrow;
        break;
    case 3:
        deltacol=deltacol-1;
        deltarow = actrow;
        break;
  }
  switch (matriz[deltarow][deltacol]) {
    case 0:
      matriz[actrow][actcol]=0;
<<<<<<< HEAD
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
=======
      matriz[deltarow][deltacol]=2;
      makevis();
      actcol=deltacol;
      actrow=deltarow;
      printmap();
      break;
    case 5:
    matriz[actrow][actcol]=0;
    matriz[deltarow][deltacol]=2;
      makevis();
      actcol=deltacol;
      actrow=deltarow;
>>>>>>> 2bc3a608d9ab7480b4fcf71d0d57e35aa359324e
      llave = 1;
      printmap();
      break;
    case 6:
      if (espada==1) {
        matriz[deltarow][deltacol]=0;
        movecheck(dir);
          break;
<<<<<<< HEAD
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
=======
      }else{printmap();printf("Necesitas una espada. ");vidas--;break;}
>>>>>>> 2bc3a608d9ab7480b4fcf71d0d57e35aa359324e
        printmap();
        break;
    case 7:
            matriz[actrow][actcol]=0;
            matriz[deltarow][deltacol]=2;
              makevis();
              actcol=deltacol;
              actrow=deltarow;
              espada = 1;
              printmap();
              break;
    case 9:
          if (llave==1) {
            nivel=nivel+1;
            cambiomapa();
            printmap();
            break;
          }else{printf("Te falta la llave. ");break;}
          printmap();
          break;
<<<<<<< HEAD
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
=======
    case 21:
        cueva=1;
        cambiomapa();
>>>>>>> 2bc3a608d9ab7480b4fcf71d0d57e35aa359324e
        printmap();
        break;
    case 22:
          cueva=0;
          cambiomapa();
          llave=1;
          printmap();
          break;
    default:
      printmap();
      printf("Movimiento invalido. \a");
      break;
  }
}

void moverArr(){
  deltarow = actrow;
  deltacol = actcol;
  movecheck(0);
}

void moverAba(){
  deltarow = actrow;
  deltacol = actcol;
  movecheck(1);
}

void moverDer(){
  deltarow = actrow;
  deltacol = actcol;
  movecheck(2);
}

void moverIzq(){
  deltarow = actrow;
  deltacol = actcol;
  movecheck(3);
}
#endif /* mapa_h */
