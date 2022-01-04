#include <stdio.h>
#include <stdlib.h>

// Faça um programa que calcule e mostre a área de um quadrado. sabe-se que: A = lado * lado.

int main(void)
{

  int lado, area;
  printf("Digite o lado do quadrado: ");
  scanf("%d", &lado);
  area = lado * lado;
  printf("Area: %d", area);
}