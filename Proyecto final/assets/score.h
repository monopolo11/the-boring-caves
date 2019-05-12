char url[200]="https://monopolo11.com/TBC/register.php?";
char name[100]="name=";
char score[100]="&score=";
char uname[100];
char score2[30];

void registerscore(){
player.score=player.score+player.monedastotal;
strcat(name,player.nombre);
itoa(player.score,score2,10);
strcat(score,score2);
strcat(url,name);
strcat(url,score);
ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
printf("%s\n",url );
}
