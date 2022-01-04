#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo 
segundo.  */

int main(void)
{
  int num1, num2, resultado;
  printf("Digite dois numeros: ");
  scanf("%d %d", &num1, &num2);
  resultado = num1 - num2;
  printf("%d e o resultado", resultado);
}