#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o 
valor do rendimento e o valor total depois do rendimento. */

int main(void)
{

  float dep, taxa, rend, total;
  printf("Digite o valor do deposito e da taxa de juro respectivamente: ");
  scanf("%f %f", &dep, &taxa);
  rend = dep * (taxa / 100);
  total = dep + rend;
  printf("Rendimento: %.2f\n", rend);
  printf("Total: %.2f", total);
}