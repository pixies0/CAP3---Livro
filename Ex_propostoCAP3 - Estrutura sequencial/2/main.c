#include <stdlib.h>
#include <stdio.h>

// Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

int main(void)
{

  int num1, num2, num3, resultado;
  printf("Digite tres numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  resultado = num1 * num2 * num3;
  printf("%d e o resultado", resultado);
}