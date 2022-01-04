#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
b)  o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

int main(void)
{

  float peso;
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("%.2f e o peso se engordar 15%%\n", peso + peso * 0.15);
  printf("%.2f e o novo peso se emagrecer 20%%\n", peso - peso * 0.20);
}