int costoespada=90;
int costoarmadura=90;
int costoantorchas=10;
int tiendaent;
void tienda(){
  while(tiendaent!=4){
      system("cls");
    SetConsoleTextAttribute(hConsole, 8);
    printf("Bienvenue dans la boutique, selecciona lo que desees mejorar\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("Tienes: %d monedas\n",player.monedas);
    SetConsoleTextAttribute(hConsole, 7);
    printf("\n1. Mejorar espada\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("Costo: %d \n",costoespada);
      SetConsoleTextAttribute(hConsole, 7);
    printf("2. Armadura\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("Costo: %d\n",costoarmadura);
    SetConsoleTextAttribute(hConsole, 7);
    printf("3. Antorchas\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("Costo: %d\n",costoantorchas);
    SetConsoleTextAttribute(hConsole, 7);
    printf("4. Salir\n");
    SetConsoleTextAttribute(hConsole, 8);
    printf("Que deseas hacer?: ");
    tiendaent=getch();
    switch (tiendaent) {
      case 49:
        player.espada++;
        player.monedas=player.monedas-costoespada;
        costoespada=costoespada+90;
        break;
      case 50:
        player.armadura++;
        player.monedas=player.monedas-costoarmadura;
        costoarmadura=costoarmadura+90;
        break;
      case 51:
        player.antorcha++;
        player.monedas=player.monedas-costoantorchas;
        break;
      case 52:
        tiendaent=4;
        break;
    }
}
printmap();
}
