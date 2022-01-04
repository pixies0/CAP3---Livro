#include <stdlib.h>
#include <stdio.h>

/*Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se 
que este sofreu um aumento de 25%.*/

int main(void)
{

  float sal, novoSal;

  printf("Digite o salario: ");
  scanf("%f", &sal);
  novoSal = sal + sal * 0.25;
  printf("O novo salario: %.2f", novoSal);
}