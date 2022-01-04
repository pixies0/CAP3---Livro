#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
a) a idade dessa pessoa em anos; 
b)  a idade dessa pessoa em meses; 
c) a idade dessa pessoa em dias; 
d)  a idade dessa pessoa em semanas.  */

int main(void)
{
  int anoNasc, anoAtual;
  printf("Digite o ano atual e o ano de nascimento: ");
  scanf("%d %d", &anoAtual, &anoNasc);
  printf("a) Idade em anos: %d\n", anoAtual - anoNasc);
  printf("b) Idade em meses: %d\n", (anoAtual - anoNasc) * 12);
  printf("c) Idade em dias: %d\n", (anoAtual - anoNasc) * 365);
  printf("d) Idade em semans: %d", (anoAtual - anoNasc) * 52);
}