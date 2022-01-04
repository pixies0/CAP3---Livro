#include <stdlib.h>
#include <stdio.h>
#define futuro 2050

/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
a) a idade dessa pessoa; 
b)  quantos anos ela terá em 2050. */

int main(void)
{

  int anonasc, anoAtual, idade, idadeFut;
  printf("Digite o ano de nascimento: ");
  scanf("%d", &anonasc);
  printf("Digite o ano presente: ");
  scanf("%d", &anoAtual);

  idade = anoAtual - anonasc;
  idadeFut = futuro - anonasc;

  printf("%d anos de idade agora, e %d anos em 2050", idade, idadeFut);
}