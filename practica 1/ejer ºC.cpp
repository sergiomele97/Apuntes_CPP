#include<stdio.h>
#include<conio.h>

main() {
       float cent, fah;
       
       printf("Introduce una temperatura en cent�grados");
       scanf("%f",&cent);
       
       fah=(9/5)*cent+32;
       
       printf("La temperatura en �F es: %f",fah);
       getch();
       
       }
