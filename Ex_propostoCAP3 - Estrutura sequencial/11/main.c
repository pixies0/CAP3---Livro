#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que calcule e mostre a área de um losango. sabe-se que: A = (diagonal maior * dia-
gonal menor)/2 */

int main(void)
{

  int diagonalMaior, diagonalMenor, area;
  printf("Digite o valor das diagonais: ");
  scanf("%d %d", &diagonalMaior, &diagonalMenor);
  area = (diagonalMaior * diagonalMenor) / 2;
  printf("Area: %d", area);
}