#include <stdlib.h>
#include <stdio.h>

/* ------ Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número 
de diagonais desse polígono. sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do 
polígono. ------ */

int main(void)
{

  int numLados;
  printf("Digite o valor dos lados: ");
  scanf("%d", &numLados);

  int diagonais = (numLados * (numLados - 3)) / 2;

  printf("%d - Diagonais\n", diagonais);
}