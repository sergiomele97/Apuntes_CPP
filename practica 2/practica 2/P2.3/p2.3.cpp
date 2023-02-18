#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
       
       float num1, num2,a,b,c,d;
       char opcion;
       
       printf("\n Introduce el primer numero:");
       scanf("%f", &num1);
       printf("\n Introduce el segundo numero:");
       scanf("%f", &num2);
       
       printf("\n Escoge una opcion (1,2,3 o 4):");
       printf("\n 1: Sumar");
       printf("\n 2: Restar");
       printf("\n 3: multiplicar");
       printf("\n 4: Dividir \n");
       scanf("%d", &opcion);
       a=num1+num2;
       b=num1-num2;
       c=num1*num2;
       d=num1/num2;
       switch(opcion) {
                      case 1:
                           printf("\n La suma es:%f+%f= %f",num1,num2, a);
                           break;
                      case 2:
                           printf("\n La resta es:%f-%f= %f",num1,num2, b);
                           break;
                      case 3:
                           printf("\n La multiplicacion es: %f*%f= %f",num1,num2, c);
                           break;
                      case 4:
                           printf("\n La division es:%f/%f= %f",num1,num2, d);
                           break;
                      default:
                           printf("\n Error, opcion incorrecta");
                           break;
                                   } /* fin del switch */
       getch();
       } /* fin del main */
