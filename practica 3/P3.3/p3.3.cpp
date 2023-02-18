#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
       int tabla, resp, contador;
       printf("¿Qué tabla quieres practicar? ");
       scanf ("%d", &tabla);
       printf ("\n Empezamos...");
       
       for(contador=1; contador <11; contador=contador+1) {
                       printf ("Cuanto es %d X%d? ", tabla, contador);
                       scanf ("%d", &resp);
                       if (resp == tabla*contador) printf("¡Correcto!");
                       else {
                            printf("Lo siento, no es correcto");
                            printf("\n La respuesta es %d", tabla*contador);
                            printf("\n Vuelve a ejecutar el programa");
                            break;
                       }
                } /* fin del for */
        } /*fin del main() */
