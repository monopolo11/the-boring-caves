//se declaran y establecen valores iniciales de la tienda
int costoespada=90;
int costoarmadura=90;
int costoantorchas=10;
int tiendaent;
int alcanza=0;
void tienda(){
  //ciclo de la tienda
  while(tiendaent!=4){
    //se limpia pantalla
    system("cls");
    //se imprimen opciones
    SetConsoleTextAttribute(hConsole, 8);
    printf("Bienvenue dans la boutique, selecciona lo que desees mejorar\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("Tienes: %d monedas\n",player.monedas);
    SetConsoleTextAttribute(hConsole, 7);
    printf("\n1. Mejorar espada\n");
    if (player.espada<3) {
    SetConsoleTextAttribute(hConsole, 6);
    printf("Costo: %d \n",costoespada);}else{SetConsoleTextAttribute(hConsole, 6);printf("Tu espada ya es nivel maximo\n");}
    SetConsoleTextAttribute(hConsole, 7);
    printf("2. Armadura\n");
    if (player.armadura<3) {
    SetConsoleTextAttribute(hConsole, 6);
    printf("Costo: %d\n",costoarmadura);}else{SetConsoleTextAttribute(hConsole, 6);printf("Tu armadura ya es nivel maximo\n");}
    SetConsoleTextAttribute(hConsole, 7);
    printf("3. Antorchas\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("Costo: %d\n",costoantorchas);
    SetConsoleTextAttribute(hConsole, 7);
    printf("4. Salir\n");
    SetConsoleTextAttribute(hConsole, 8);
    printf("Que deseas hacer?:\n");
    if (alcanza!=0) {
      SetConsoleTextAttribute(hConsole, 4);
      printf("Dinero insuficiente\n");
    }
    alcanza=0;
    //se obtiene la entrada de la tienda
    tiendaent=getch();
    switch (tiendaent) {
      case 49:
      if (player.espada<3) {
        if(player.monedas>=costoespada){
        player.espada++;
        player.monedas=player.monedas-costoespada;
        costoespada=costoespada+90;
        player.score=player.score+(player.espada*100);
        break;}else{alcanza=1;break;}
      }

      case 50:
        if (player.armadura<3) {
          if(player.monedas>=costoarmadura){
          player.armadura++;
          player.monedas=player.monedas-costoarmadura;
          costoarmadura=costoarmadura+90;
          player.score=player.score+(player.armadura*100);
          break;}else{alcanza=1;break;}
        }
      case 51:
      if(player.monedas>=costoantorchas){
        player.antorcha++;
        player.monedas=player.monedas-costoantorchas;
        break;}else{alcanza=1;break;}
      case 52:
        tiendaent=4;
        break;
    }
}
//se reinicia la entrada de la tienda
tiendaent = 0;
//se imprime el mapa de nuevo
printmap();
}
