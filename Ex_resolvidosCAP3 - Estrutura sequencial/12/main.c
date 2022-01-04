#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

int main(void)
{

  int x, y, pot;
  printf("Digite x e y respectivamente: ");
  scanf("%d %d", &x, &y);
  pot = pow(x, y);
  printf("Resultado: %d", pot);
}