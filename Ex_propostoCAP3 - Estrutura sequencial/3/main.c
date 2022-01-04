#include <stdlib.h>
#include <stdio.h>

/* Faça  um  programa  que  receba  dois  números,  calcule  e  mostre  a  divisão  do  primeiro  número  pelo  
segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar 
com validações. */

int main(void)
{

  int num1, num2, resultado;
  printf("Digite dois numeros: ");
  scanf("%d %d", &num1, &num2);
  resultado = num1 / num2;
  printf("%d e o resultado", resultado);
}