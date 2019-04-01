#ifndef movimiento_h
#define movimiento_h
  int deltarow = 0;
  int deltacol = 0;
void makevis(){
  //quitar visibilidad
  if(matrizvis[actrow][actcol-3]!=2){matrizvis[actrow][actcol-3]=0;};
  if(matrizvis[actrow][actcol+3]!=2){matrizvis[actrow][actcol+3]=0;};

  if(matrizvis[actrow-1][actcol-3]!=2){matrizvis[actrow-1][actcol-3]=0;};
  if(matrizvis[actrow-1][actcol+3]!=2){matrizvis[actrow-1][actcol+3]=0;};

  if(matrizvis[actrow-2][actcol-3]!=2){matrizvis[actrow-2][actcol-3]=0;};
  if(matrizvis[actrow-2][actcol+3]!=2){matrizvis[actrow-2][actcol+3]=0;};

  if(matrizvis[actrow+1][actcol-3]!=2){matrizvis[actrow+1][actcol-3]=0;};
  if(matrizvis[actrow+1][actcol+3]!=2){matrizvis[actrow+1][actcol+3]=0;};

  if(matrizvis[actrow+2][actcol-3]!=2){matrizvis[actrow+2][actcol-3]=0;};
  if(matrizvis[actrow+2][actcol+3]!=2){matrizvis[actrow+2][actcol+3]=0;};

  if(matrizvis[actrow-3][actcol-3]!=2){matrizvis[actrow-3][actcol-3]=0;};
  if(matrizvis[actrow-3][actcol-2]!=2){matrizvis[actrow-3][actcol-2]=0;};
  if(matrizvis[actrow-3][actcol-1]!=2){matrizvis[actrow-3][actcol-1]=0;};
  if(matrizvis[actrow-3][actcol]!=2){matrizvis[actrow-3][actcol]=0;};
  if(matrizvis[actrow-3][actcol+1]!=2){matrizvis[actrow-3][actcol+1]=0;};
  if(matrizvis[actrow-3][actcol+2]!=2){matrizvis[actrow-3][actcol+2]=0;};
  if(matrizvis[actrow-3][actcol+3]!=2){matrizvis[actrow-3][actcol+3]=0;};

  if(matrizvis[actrow+3][actcol-3]!=2){matrizvis[actrow+3][actcol-3]=0;};
  if(matrizvis[actrow+3][actcol-2]!=2){matrizvis[actrow+3][actcol-2]=0;};
  if(matrizvis[actrow+3][actcol-1]!=2){matrizvis[actrow+3][actcol-1]=0;};
  if(matrizvis[actrow+3][actcol]!=2){matrizvis[actrow+3][actcol]=0;};
  if(matrizvis[actrow+3][actcol+1]!=2){matrizvis[actrow+3][actcol+1]=0;};
  if(matrizvis[actrow+3][actcol+2]!=2){matrizvis[actrow+3][actcol+2]=0;};
  if(matrizvis[actrow+3][actcol+3]!=2){matrizvis[actrow+3][actcol+3]=0;};
  //hacer visible
  if(matrizvis[actrow][actcol-2]!=2){matrizvis[actrow][actcol-2]=1;};
  if(matrizvis[actrow][actcol+2]!=2){matrizvis[actrow][actcol+2]=1;};

  if(matrizvis[actrow-1][actcol-2]!=2){matrizvis[actrow-1][actcol-2]=1;};
  if(matrizvis[actrow-1][actcol+2]!=2){matrizvis[actrow-1][actcol+2]=1;};
  if(matrizvis[actrow-1][actcol-1]!=2){matrizvis[actrow-1][actcol-1]=1;};
  if(matrizvis[actrow-1][actcol+1]!=2){matrizvis[actrow-1][actcol+1]=1;};
  if(matrizvis[actrow-1][actcol]!=2){matrizvis[actrow-1][actcol]=1;};

  if(matrizvis[actrow-2][actcol-2]!=2){matrizvis[actrow-2][actcol-2]=1;};
  if(matrizvis[actrow-2][actcol+2]!=2){matrizvis[actrow-2][actcol+2]=1;};
  if(matrizvis[actrow-2][actcol-1]!=2){matrizvis[actrow-2][actcol-1]=1;};
  if(matrizvis[actrow-2][actcol+1]!=2){matrizvis[actrow-2][actcol+1]=1;};
  if(matrizvis[actrow-2][actcol]!=2){matrizvis[actrow-2][actcol]=1;};

  if(matrizvis[actrow+1][actcol-2]!=2){matrizvis[actrow+1][actcol-2]=1;};
  if(matrizvis[actrow+1][actcol+2]!=2){matrizvis[actrow+1][actcol+2]=1;};

  if(matrizvis[actrow+1][actcol-2]!=2){matrizvis[actrow+1][actcol-2]=1;};
  if(matrizvis[actrow+1][actcol+2]!=2){matrizvis[actrow+1][actcol+2]=1;};
  if(matrizvis[actrow+1][actcol-1]!=2){matrizvis[actrow+1][actcol-1]=1;};
  if(matrizvis[actrow+1][actcol+1]!=2){matrizvis[actrow+1][actcol+1]=1;};
  if(matrizvis[actrow+1][actcol]!=2){matrizvis[actrow+1][actcol]=1;};

  if(matrizvis[actrow+2][actcol-2]!=2){matrizvis[actrow+2][actcol-2]=1;};
  if(matrizvis[actrow+2][actcol+2]!=2){matrizvis[actrow+2][actcol+2]=1;};
  if(matrizvis[actrow+2][actcol-1]!=2){matrizvis[actrow+2][actcol-1]=1;};
  if(matrizvis[actrow+2][actcol+1]!=2){matrizvis[actrow+2][actcol+1]=1;};
  if(matrizvis[actrow+2][actcol]!=2){matrizvis[actrow+2][actcol]=1;};

}
void placetorch(){
  if(player.antorcha!=0){
  PlaySound("CLICK", NULL, SND_ASYNC | SND_RESOURCE);
  player.antorcha--;
  printmap();
  matrizvis[actrow][actcol-2]=2;
  matrizvis[actrow][actcol+2]=2;
  matrizvis[actrow][actcol-1]=2;
  matrizvis[actrow][actcol+1]=2;
  matrizvis[actrow][actcol+1]=2;
  matrizvis[actrow][actcol]=3;

  matrizvis[actrow-1][actcol-2]=2;
  matrizvis[actrow-1][actcol+2]=2;
  matrizvis[actrow-1][actcol-1]=2;
  matrizvis[actrow-1][actcol+1]=2;
  matrizvis[actrow-1][actcol]=2;

  matrizvis[actrow-2][actcol-2]=2;
  matrizvis[actrow-2][actcol+2]=2;
  matrizvis[actrow-2][actcol-1]=2;
  matrizvis[actrow-2][actcol+1]=2;
  matrizvis[actrow-2][actcol]=2;

  matrizvis[actrow+1][actcol-2]=2;
  matrizvis[actrow+1][actcol+2]=2;

  matrizvis[actrow+1][actcol-2]=2;
  matrizvis[actrow+1][actcol+2]=2;
  matrizvis[actrow+1][actcol-1]=2;
  matrizvis[actrow+1][actcol+1]=2;
  matrizvis[actrow+1][actcol]=2;

  matrizvis[actrow+2][actcol-2]=2;
  matrizvis[actrow+2][actcol+2]=2;
  matrizvis[actrow+2][actcol-1]=2;
  matrizvis[actrow+2][actcol+1]=2;
  matrizvis[actrow+2][actcol]=2;
}else{SetConsoleTextAttribute(hConsole, 4);printf("No tienes antorchas\n");}}

void movecheck(int dir){
  makevis();
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
    if (cueva==1) {
      PlaySound("PASO2", NULL, SND_ASYNC | SND_RESOURCE);
    }else{
      PlaySound("PASO1", NULL, SND_ASYNC | SND_RESOURCE);}
      matriz[actrow][actcol]=0;
      matriz[deltarow][deltacol]=2;
      //makevis();
      actcol=deltacol;
      actrow=deltarow;
      printmap();
      break;
    case 5:
    matriz[actrow][actcol]=0;
    matriz[deltarow][deltacol]=2;
      //makevis();
      actcol=deltacol;
      actrow=deltarow;
      player.llave = 1;
      printmap();
      break;
    case 6:
      if (player.espada==1) {
        PlaySound("HIT", NULL, SND_ASYNC | SND_RESOURCE);
        matriz[deltarow][deltacol]=0;
        player.vidas++;
        movecheck(dir);
        printmap();
        break;
      }else{
        player.vidas--;
        printmap();
        PlaySound("OOF", NULL, SND_ASYNC | SND_RESOURCE);
        SetConsoleTextAttribute(hConsole, 4);
        printf("Necesitas una espada.\n");
        break;
      }
        printmap();
        break;
    case 7:
            matriz[actrow][actcol]=0;
            matriz[deltarow][deltacol]=2;
              //makevis();
              actcol=deltacol;
              actrow=deltarow;
              player.espada = 1;
              PlaySound("ESPADA1", NULL, SND_ASYNC | SND_RESOURCE);
              printmap();
              break;
    case 9:
          if (player.llave==1) {
            PlaySound("PUERTA", NULL, SND_ASYNC | SND_RESOURCE);
            matriz[actrow][actcol]=0;
            nivel=nivel+1;
            cambiomapa();
            printmap();
            break;
          }if(player.llave==0){
            matriz[actrow][actcol]=2;
            printmap();
            printf("Te falta la player.llave.\n");
            break;
          }
      case 12:
      if (player.espada==1&&player.armadura==1) {
        PlaySound("HIT", NULL, SND_ASYNC | SND_RESOURCE);
        matriz[deltarow][deltacol]=0;
        player.vidas++;
        movecheck(dir);
        printmap();
        SetConsoleTextAttribute(hConsole, 4);
        printf("A nu ma. Te la pelo el dragon.\n");
          break;
      }else{
              player.vidas--;
              printmap();
              PlaySound("DRAGON", NULL, SND_ASYNC | SND_RESOURCE);
              SetConsoleTextAttribute(hConsole, 4);
              printf("Un Dragon!! Corre Perra! Corre!.\n");
              break;}
      case 13:
        matriz[actrow][actcol]=0;
        matriz[deltarow][deltacol]=2;
        //makevis();
        actcol=deltacol;
        actrow=deltarow;
        player.armadura = 1;
        PlaySound("ARMADURA1", NULL, SND_ASYNC | SND_RESOURCE);
        printmap();
        break;
    case 21:
    //matriz[actrow][actcol]=0;
    if(init==0){mapasave();}
        PlaySound("ESCALERA1", NULL, SND_ASYNC | SND_RESOURCE);
        cueva=1;
        llavetemp=1;
          //if(init==0){mapasave();}
        cambiomapa();
        printmap();
        break;
    case 22:
    //matriz[actrow][actcol]=0;
    if(init==0){mapasave();}
          PlaySound("ESCALERA2", NULL, SND_ASYNC | SND_RESOURCE);
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
      printf("Movimiento invalido.\n");
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
