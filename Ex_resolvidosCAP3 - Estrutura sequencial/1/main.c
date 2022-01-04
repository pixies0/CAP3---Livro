#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

int main(void)
{

  int n1, n2, n3, n4, soma;
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
  soma = n1 + n2 + n3 + n4;
  printf("Resultado da soma: %d", soma);
}