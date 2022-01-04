#include <stdlib.h>
#include <stdio.h>

/* ---- Faça  um  programa  que  receba  uma  hora  (uma  variável  para  hora  e  outra  para  minutos),  calcule  e  
mostre: 
a) a hora digitada convertida em minutos; 
b)  o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; 
c) o total dos minutos convertidos em segundos.  ----- */

int main(void)
{

  int horas, minutos;
  printf("Digite a hora e minuto respectivamente: ");
  scanf("%d %d", &horas, &minutos);

  printf("%d horas = %d minutos\n", horas, horas * 60);
  printf("total de minutos: %d\n", minutos + horas * 60);
  printf("total de segundos: %d\n", (minutos + horas * 60) * 60);
}