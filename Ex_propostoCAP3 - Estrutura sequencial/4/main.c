#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
derando peso 2 para a primeira e peso 3 para a segunda. */

int main(void)
{

  float nota1, nota2, media;
  printf("Digite a nota1: ");
  scanf("%f", &nota1);
  printf("Digite a nota2: ");
  scanf("%f", &nota2);
  media = (nota1 * 2 + nota2 * 3) / 5;
  printf("%.2f e a media", media);
}