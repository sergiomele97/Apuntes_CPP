#include "stdio.h"
#include "conio.h"
#include "math.h"

main() {
       float num, suma=0;
       int contador =1;
       
       do {
           printf ("Introduce la cifra %d:",contador);
           scanf ("%f", &num);
           suma=suma+num;
           contador=contador+1;
           } 
           while(contador <=20);{432
                          
           printf("\n La suma es %f:", suma);}
           getch();
           }        
