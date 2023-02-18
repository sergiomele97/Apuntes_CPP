#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
       int n1, n2;
       float a,b,c,d,e;
       
       printf ("Teclea el primer número: ");
       scanf("%d", &n1);
       printf("\n Teclea el segundo número: ");
       scanf("%d", &n2);
       
       a= n1+n2;
       b=n1-n2;
       c=n1*n2;
       d=n1/n2;
       e=pow(n1,n2);
       
       printf("\n \n RESULTADOS ARITMÉTICOS");
       printf("\n \t %d + %d = %f", n1, n2, a);
       printf("\n \t %d - %d = %f", n1, n2,b);
       printf("\n \t %d * %d = %f", n1, n2, c);
       printf("\n \t %d / %d = %f", n1, n2, d);
       printf("\n \t %d ^ %d = %f", n1, n2, e);
       getch();
       }
