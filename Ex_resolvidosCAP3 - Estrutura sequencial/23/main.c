#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa que receba um número real, encontre e mostre: 
a) a parte inteira desse número; 
b)  a parte fracionária desse número; 
c) o arredondamento desse número. */

int main(void)
{

  float num, partFloat;
  int partInt;

  printf("Digite um numero: ");
  scanf("%f", &num);
  partInt = num;
  partFloat = num - floor(num);
  int arredonda = round(num);
  printf("a) %d e a parte inteira\n", partInt);
  printf("b) %.2f e a parte fracionaria\n", partFloat);
  printf("c) %d e o numero arredondado", arredonda);
}