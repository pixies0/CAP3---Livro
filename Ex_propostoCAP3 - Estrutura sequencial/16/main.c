#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

int main(void)
{

  int a, b, c;
  printf("Digite o valor dos catetos: ");
  scanf("%d %d", &b, &c);
  a = sqrt(b * b + c * c);
  printf("%d e o valor da hipotenusa", a);
}