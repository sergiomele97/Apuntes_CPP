#include "stdio.h"
#include "conio.h"
main() {
       int n1, n2, n3;
       printf ("Introduce el primer numero: ");
       scanf("%d", &n1);
       printf ("Introduce el segundo numero: ");
       scanf ("%d", &n2);
       printf(" Introduce el tercer numero: ");
       scanf ("%d", &n3);
       
       if(n1>n2) {
                 if(n1>n3) printf ("El primero es el mayor");
                 else printf ("El tercero es el mayor");
                 }
                 else {
                      if(n2>n3) printf ("El segundo es el mayor");
                      else printf ("El tercero es el mayor");
                      }
        getch();            
                      }
