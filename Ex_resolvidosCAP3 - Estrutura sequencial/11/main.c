#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 1.  Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado. */

int main(void)
{

  int num;
  printf("Digite um numero positivo e maior que 0: ");
  scanf("%d", &num);
  printf("a) %d\n", num * num);
  printf("b) %d\n", num * num * num);
  printf("c) %.2f\n", pow(num, 0.5));
  printf("d) %.2f", pow(num, 0.3333333333333333333333333));
}