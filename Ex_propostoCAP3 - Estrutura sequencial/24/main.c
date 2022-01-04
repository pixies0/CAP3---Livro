#include <stdlib.h>
#include <stdio.h>

/* ----- Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela 
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O 
programa deve fazer as conversões e mostrá-las. -----*/

int main(void)
{

  float real;
  printf("Digite o valor em R$: ");
  scanf("%f", &real);

  float dol = 1.80 * real;
  float alem = 2 * real;
  float libra = 3.57 * real;
  printf("%.2f - $Dolar\n", dol);
  printf("%.2f - Marco alemao\n", alem);
  printf("%.2f - Libra\n", libra);
}