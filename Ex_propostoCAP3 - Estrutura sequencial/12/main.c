#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule 
e mostre a quantidade de salários mínimos que esse funcionário ganha. */

int main(void)
{

  float salMin, sal;
  int qtd;
  printf("Digite o salario minimo: ");
  scanf("%f", &salMin);
  printf("Digite o salario do funcionario: ");
  scanf("%f", &sal);
  qtd = sal / salMin;
  printf("%d salarios minimos esse funcionario recebe", qtd);
}