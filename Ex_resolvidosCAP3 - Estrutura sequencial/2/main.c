#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba três notas, calcule e mostre a média aritmética.

int main(void)
{

  float nota1, nota2, nota3, media;
  scanf("%f %f %f", &nota1, &nota2, &nota3);
  media = (nota1 + nota2 + nota3) / 3;
  printf("A media e: %.2f", media);
}