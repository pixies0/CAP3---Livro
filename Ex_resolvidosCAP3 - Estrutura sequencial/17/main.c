#include <stdlib.h>
#include <stdio.h>

/* Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois 
cheques  e  agora  deseja  saber  seu  saldo  atual.  sabe-se  que  cada  operação  bancária  de  retirada  paga  
cPMF de 0,38% e o saldo inicial da conta está zerado. */

int main(void)
{

  float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
  printf("Digite o salario: ");
  scanf("%f", &salario);
  printf("Digite o valor do cheque 1: ");
  scanf("%f", &cheque1);
  printf("Digite o valor do cheque 2: ");
  scanf("%f", &cheque2);
  cpmf1 = cheque1 * (0.38 / 100);
  cpmf2 = cheque2 * (0.38 / 100);
  saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
  printf("O saldo e: %.2f", saldo);
}