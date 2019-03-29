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

void movecheck(int dir){
  switch (dir) {
    case 0:
      deltarow=deltarow-1;
      deltacol = actcol;
      break;
    case 1:
      deltarow=deltarow+1;
      deltacol = actcol;
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
      llave = 1;
      printmap();
      break;
    case 6:
      if (espada==1) {
        matriz[deltarow][deltacol]=0;
        vidas++;
        movecheck(dir);
          break;
      }else{
        vidas--;
        printmap();
        SetConsoleTextAttribute(hConsole, 4);
        printf("\nNecesitas una espada.");
        break;
      }
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
            matriz[actrow][actcol]=0;
            nivel=nivel+1;
            cambiomapa();
            printmap();
            break;
          }if(llave==0){
            matriz[actrow][actcol]=2;
            printmap();
            printf("\nTe falta la llave. ");
            break;
          }
      case 12:
              vidas--;
              printmap();
              SetConsoleTextAttribute(hConsole, 4);
              printf("\nUn Dragon!! Corre Perra! Corre!.");
              break;
    case 21:
    matriz[actrow][actcol]=0;
    if(init==0){mapasave();}
        cueva=1;
        llavetemp=1;
          //if(init==0){mapasave();}
        cambiomapa();
        printmap();
        break;
    case 22:
    matriz[actrow][actcol]=0;
    if(init==0){mapasave();}
          cueva=0;
          //  if(init==0){mapasave();}
          cambiomapa();
          printmap();
          llavetemp = 0;
          break;
    case 24:
          juegofin=1;
                break;
    default:
      printmap();
      printf("\nMovimiento invalido.");
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
