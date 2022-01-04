#include <stdlib.h>
#include <stdio.h>

/* ----  Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do 
terceiro ângulo. sabe-se que a soma dos ângulos de um triângulo é 180 graus.  ----- */

int main(void)
{

  int angulo1, angulo2, angulo3;
  printf("Digite o valor dos angulos: ");
  scanf("%d %d", &angulo1, &angulo2);
  angulo3 = 180 - angulo1 - angulo2;
  printf("Terceiro angulo: %d", angulo3);
}