#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

int main(void)
{

  float nota1, nota2, nota3, peso1, peso2, peso3, media;

  printf("Nota 1: ");
  scanf("%f", &nota1);
  printf("Peso nota 1: ");
  scanf("%f", &peso1);
  printf("Nota 2: ");
  scanf("%f", &nota2);
  printf("Peso nota 2: ");
  scanf("%f", &peso2);
  printf("Nota 3: ");
  scanf("%f", &nota3);
  printf("Peso nota 3: ");
  scanf("%f", &peso3);
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
  printf("Media: %.2f", media);
}