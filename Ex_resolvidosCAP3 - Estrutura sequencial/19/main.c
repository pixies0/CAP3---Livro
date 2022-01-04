#include <stdlib.h>
#include <stdio.h>

/* cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que 
o  usuário  deseja  alcançar  subindo  a  escada,  calcule  e  mostre  quantos  degraus  ele  deverá  subir  para  
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem 
estar em metros. */

int main(void)
{

  float alturaDegrau, alturaSubir;
  printf("Valor em m da altura do degrau: ");
  scanf("%f", &alturaDegrau);
  printf("Valor em m a subir: ");
  scanf("%f", &alturaSubir);
  int resultado = alturaSubir / alturaDegrau;
  printf("%d degraus vc deve subir para alcancar %.2f metros de altura", resultado, alturaSubir);
}