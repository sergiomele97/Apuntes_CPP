#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

main(){
      char cont, resp, aleat, jugar;
       do{
           aleat=rand()%2;
           printf("¿1-cara o 0-cruz?");
           resp=getche();
           printf("%c", resp);
                      if (resp=='1' && aleat=='0'){
           printf("\n ¡Acertaste!");
           }
           else {
            printf("\n ¡Fallaste!");
            }
           printf ("¿Quieres jugar otra vez? \n 1=SI 0=NO \n");
            jugar=getche();
           } while(jugar=='1');
         printf("%c", jugar);
           getch();
           }
