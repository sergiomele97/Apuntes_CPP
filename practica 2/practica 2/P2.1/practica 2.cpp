#include "stdio.h"
#include "conio.h"
main(){
       float num;
       int option;
       printf("Escoge la opcion:");
       printf("\n 1: Kilometros a millas");
       printf("\ 2: Millas a kilometros");
       scanf("%d", &option);
       
       if(option == 1) {
                 printf("\n Introduce los kilometros:");
                 scanf ("%f", &num);
                 printf ("\n En millas son: %f", num/1.60934) ;
            }
             else {
                  printf("\n Introduce las millas: ");
                  scanf ("%f", num);
                  printf("\n En kilometros son: %f", num*1.60934);
                      }
                      getch();
                      }
