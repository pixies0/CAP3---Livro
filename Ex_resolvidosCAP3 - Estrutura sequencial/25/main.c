#include <stdlib.h>
#include <stdio.h>

/*  Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. 
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, 
pelo menos, o custo do espetáculo seja alcançado. */

int main(void)
{

  float custo, convite;
  int qtdIngresso;
  printf("Digite o custo do espetaculo: ");
  scanf("%f", &custo);
  printf("Digite o valor do ingresso: ");
  scanf("%f", &convite);

  qtdIngresso = custo / convite;
  printf("%d ingressos devem ser vendidos", qtdIngresso);
}