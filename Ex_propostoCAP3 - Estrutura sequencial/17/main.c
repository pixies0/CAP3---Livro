#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

/*  Faça um programa que receba o raio, calcule e mostre: 
a) o comprimento de uma esfera; sabe-se que c = 2 * p R; 
b)  a área de uma esfera; sabe-se que A = p R2; 
c) o volume de uma esfera; sabe-se que v = ¾ * p R3.  */

int main(void)
{

  float raio;
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);
  float comp = 2 * pi * raio;
  float area = pi * (raio * raio);
  float volume = 0.75 * pi * (raio * raio * raio);
  printf("a) %.2f - Comprimento\n", comp);
  printf("b) %.2f - Area\n", area);
  printf("c) %.2f - Volume\n", volume);
}