#include <stdlib.h.>
#include <stdio.h>

/*Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre 
o valor do aumento e o novo salário.*/

int main(void)
{

  float salario, percent, total;
  printf("Digite o salario: ");
  scanf("%f", &salario);
  printf("Valor do aumento em %%: ");
  scanf("%f", &percent);
  total = salario + salario * (percent / 100);
  printf("Aumento: %.2f\n", salario * (percent / 100));
  printf("Novo salario: %.2f", total);
}