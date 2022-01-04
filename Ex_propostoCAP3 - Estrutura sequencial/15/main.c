#include <stdlib.h>
#include <stdio.h>

/* João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar 
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de 
João. */

int main(void)
{

  float sal, conta1, conta2;
  printf("Digite o salario: ");
  scanf("%f", &sal);
  printf("Digite o valor da conta1: ");
  scanf("%f", &conta1);
  printf("Digite o valor da conta2: ");
  scanf("%f", &conta2);
  conta1 = conta1 + conta1 * 0.02;
  conta2 = conta2 + conta2 * 0.02;
  printf("Restara %.2f do salario de joao", sal - conta1 - conta2);
}