#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "math.h"
#include "iostream" 
#include "string.h"

main(){char cadena[60], control[60], palabra[20];
    char pal, letra, x;
    int contador, i, z, rep=0, aciertos=0, vidas=5, r=0, e=0, cont=0, y=0;
    printf("\tJuego del Ahorcado\n");
    printf("Introduzca la palabra a adivinar: \n");
    gets(cadena);
    system("CLS");
printf("\n\n\t\t<<<EL JUEGO DEL AHORCADO>>>\n\n");
    contador = strlen(cadena);
          printf("Cantidad de letras: %d \n\n\n\n", contador);
           for(z = 0; z<contador; z++){
          palabra[z]='_';
          }
          while(y<contador){ 
                           printf(" \t _");
                           y=y+1;
                           }
                                     
          while(aciertos < contador) {
                          printf("\n ");
                  scanf(" %c", &x);
                                                    system("CLS");
                                                    printf("\n\n\t\t<<<EL JUEGO DEL AHORCADO>>>\n\n");
                   for (e = 0; control[e] != '\0'; e++){ 
                       if (control[e] == x) { printf("\n <<<letra repetida>>> \t\t %s \n", palabra);
                       rep=1;
                       }
                                      }
                            if(rep==1){ 
                            rep=0;
                            } else {         
                                             r++;
                                             control[r]=x;
                            for (i = 0; cadena[i] != '\0'; i++){ 
                                if (cadena[i] == x){ 
                                              palabra[i] = x;
                                              cont=cont+1;
                                              }
                                              }
                                              printf("Has acertado %d letra/as %c \t\t %s\n", cont, x, palabra);
                                              if (cont==0){ 
                                              vidas=vidas-1;
                                              if(vidas==0) { 
                                                           printf("\n...\n...\n...\n...\n...\n\t\t\t¡Has perdido! :(");
  
                                                           getch(); 
                                                           exit(0);
                                                           }
                                              printf("¡FALLASTES! te quedan %d vidas", vidas);
                                              } else {
                                                 aciertos=aciertos+cont;
                                                 cont=0;
                                                 }
                                                     }
                                                     }

                                   

                               
                            
    printf("\n\n\n \t\t ¡¡¡FELICIDADES, HAS GANADO!!!");
getch();
}
