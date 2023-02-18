#include "stdio.h"
#include "conio.h"
#include "math.h"
main(){
       float base, altura,resultado;
       printf("Calcular la superficie de un triangulo");
       
       printf("\n Introduce la base del triangulo: ");
       scanf("%f", &base);
       printf("\n Introduce la altura de triangulo: ");
       scanf("%f",&altura);
       resultado=base*altura/2;
       printf("La superficie es %f", resultado);
       getch();
       }
     
