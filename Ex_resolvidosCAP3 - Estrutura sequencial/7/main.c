#include <stdio.h>
#include <stdlib.h>
#define aumento 50; //uso de constante

/*Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, 
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.*/

int main(void)
{

  float sal, novoSal, imposto;
  printf("Digite o salario: ");
  scanf("%f", &sal);
  imposto = sal * 0.10;
  novoSal = sal + aumento - imposto;
  printf("Novo salario: %.2f ", novoSal);
}