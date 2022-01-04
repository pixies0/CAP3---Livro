#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*  Faça um programa que calcule e mostre a área de um trapézio. 
sabe-se que: A = ((base maior + base menor) * altura)/2 */

int main(void)
{

  int baseMaior, baseMenor, altura, area;
  printf("Digite o valor das bases: ");
  scanf("%d %d", &baseMenor, &baseMaior);
  printf("Digite a altura: ");
  scanf("%d", &altura);
  area = ((baseMaior + baseMenor) * altura) / 2;
  printf("Area: %d", area);
}