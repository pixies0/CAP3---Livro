#include <stdlib.h>
#include <stdio.h>

/*  Sabe-se que: 
pé = 12 polegadas 
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas; 
b)  jardas; 
c) milhas. */

int main(void)
{

  float valor, pol, jard, mi;
  printf("Digite um valor em pes: ");
  scanf("%f", &valor);
  pol = valor * 12;
  jard = valor / 3;
  mi = jard / 1760;
  printf("a) %.2f polegadas\n", pol);
  printf("b) %.2f jardas\n", jard);
  printf("c) %.2f milhas\n", mi);
}