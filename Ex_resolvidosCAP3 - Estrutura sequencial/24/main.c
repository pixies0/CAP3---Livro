#include <stdlib.h>
#include <stdio.h>

/* Faça  um  programa  que  receba  uma  hora  formada  por  hora  e  minutos  (um  número  real),  calcule  e 
mostre a hora digitada apenas em minutos. lembre-se de que:
■ para quatro e meia, deve-se digitar 4.30; 
■ os minutos vão de 0 a 59. */

int main(void)
{

  float horas, horasMinutos, conversao;

  printf("Digite as horas e minutos: ");
  scanf("%f", &horas);
  int h = horas;
  horasMinutos = horas - h;
  conversao = (h * 60) + (horasMinutos * 100);
  printf("Hora digita em minutos: %.2f", conversao);
}