gcc -c  main.c -o main.o 
windres -i sounds.rc -o sounds.res -O coff
gcc main.o sounds.res -o juego.exe -lwinmm 
xcopy juego.exe "%USERPROFILE%\Desktop\"
del sounds.res
del main.o
del juego.exe