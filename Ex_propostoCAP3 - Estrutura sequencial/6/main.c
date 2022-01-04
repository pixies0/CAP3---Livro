#include <stdlib.h>
#include <stdio.h>

/* Um  funcionário  recebe  um  salário  fixo  mais  4%  de  comissão  sobre  as  vendas.  Faça  um  programa  
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu 
salário final. */

int main(void)
{

  float sal, comissao, valComissao, salFinal;
  printf("Digite o salario: ");
  scanf("%f", &sal);
  printf("Digite o valor das vendas: ");
  scanf("%f", &valComissao);
  comissao = valComissao * 0.04;
  salFinal = sal + comissao;
  printf("%.2f de comissao\n", comissao);
  printf("%.2f salario final a receber", salFinal);
}