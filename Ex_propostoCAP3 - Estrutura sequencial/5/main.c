#include <stdlib.h>
#include <stdio.h>

/* Faça  um  programa  que  receba  o  preço  de  um  produto,  calcule  e  mostre  o  novo  preço,  sabendo-se  
que este sofreu um desconto de 10%. */

int main(void)
{

  float preco, desconto;
  printf("Digite o preco do produto: ");
  scanf("%f", &preco);
  desconto = preco - preco * 0.1;
  printf("Total a pagar: %.2f", desconto);
}