#include "stdio.h"
#include "conio.h"

main(){
       int tabla[10][10],i,j;
       for(i=0;i<10;i++) {
                         for(j=0;j<10;j++) {
                                           tabla[i][j]=i+j;
                                           printf("%d\t", tabla[i][j]);
                                           
                                           }
                                           printf("\n");
                                           }
                                           getch();
                                           }
