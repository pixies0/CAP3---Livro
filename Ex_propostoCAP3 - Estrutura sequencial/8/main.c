#include <stdlib.h>
#include <stdio.h>

// Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

int main(void)
{

  float peso;
  printf("Digite o peso em Kg: ");
  scanf("%f", &peso);
  printf("%.2f e o peso em gramas", peso * 1000);
}