#include <stdlib.h.>
#include <stdio.h>

/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, 
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam-
bém sobre o salário base*/

int main(void)
{

  float sal, aumento, imposto, novoSal;
  printf("Digite o salario base: ");
  scanf("%f", &sal);
  aumento = sal * 0.05;
  imposto = sal * 0.07;
  novoSal = sal + aumento - imposto;
  printf("Novo salario: %.2f", novoSal);
}