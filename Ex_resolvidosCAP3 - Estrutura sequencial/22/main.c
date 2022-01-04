#include <stdlib.h>
#include <stdio.h>

/*sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que rece-
ba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. calcule e 
mostre:
a) o valor de cada quilowatt; 
b)  o valor a ser pago por essa residência; 
c) o valor a ser pago com desconto de 15%. */

int main(void)
{

  float salMin, quilowat;
  printf("Valor do salario minimo: ");
  scanf("%f", &salMin);
  printf("Quantidade de quilowatts consumida: ");
  scanf("%f", &quilowat);
  float valQuilowatt = salMin / 5;
  float consumo = quilowat * valQuilowatt;
  float desconto = consumo * 0.15;
  printf("a) R$%.2f o valor de cada quilowatt\n", valQuilowatt);
  printf("b) R$%.2f valor total a pagar\n", consumo);
  printf("c) R$%.2f o valor a pagar com desconto\n", consumo - desconto);
}