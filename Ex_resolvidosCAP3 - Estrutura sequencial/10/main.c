#include <stdlib.h>
#include <stdio.h>
#define pi 3.14;

//Faça um programa que calcule e mostre a área de um círculo. sabe-se que: Área = p * R2.

int main(void)
{

  float area, raio;
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);
  area = raio * raio * pi;
  printf("Area: %.2f", area);
}