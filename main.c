#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int matriz[10][10], sdp=0, sds=0, i, j, m;
 printf("\nDigite o valor M da linha e coluna da matriz quadrada: ");
 scanf("%i",&m);
 for (i=0;i<m;i++)
 {
 for(j=0;j<m;j++)
 {printf("\nDigite o elemento %i x %i da matriz: ",i+1,j+1);
 scanf("%i",&matriz[i][j]);
 }
 }
 printf("\nNOME: Lucas Simoes");
 j=m-1;
 for(i=0;i<m;i++)
 {
 sdp=sdp+matriz[i][i];
 sds=sds+matriz[i][j];
 j--;
 }
 printf("\nSoma diagonal principal: %i", sdp);
 printf("\nSoma da diagonal secundaria: %i", sds);
 return 0;
 }
