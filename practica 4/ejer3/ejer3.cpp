#include "stdio.h"
#include "conio.h"
 main(){
      int i,j,numeros[10],aux;
      for(i=0 ;i<9; i++){
              printf ("\n Teclea el numero %d: ", i+1);
              scanf("%d",&numeros[i]);
              }
      for(i=0;i<9;i++){
                       for(j=0;j<9;j++){
                                        if(numeros[j]>numeros[j+1]){
                                                                            aux=numeros[j];
                                                                            numeros[j]=numeros[j+1];
                                                                            numeros[j+1]=aux;
                                                                            }
                                                                            }
                                                                            }
                                                                            printf("\n\n Lalista de los 10 numeros ordenada es:");
                                                                            for(i=0;i<=9;i++) printf("\n %d",i);
                                                                            getch();
                                                                            }
