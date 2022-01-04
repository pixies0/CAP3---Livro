#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e 
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo. 
b)  o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. 
c) o imposto equivale a 3% do salário bruto. 
d)  o salário a receber equivale ao salário bruto menos o imposto.  */

int main(void)
{

  int horasTrab;
  float salMin, valHora, salBruto, imposto, salFinal;
  printf("Digite o numero de horas trabalhadas: ");
  scanf("%d", &horasTrab);
  printf("Digite o valor do salario minimo: ");
  scanf("%f", &salMin);
  valHora = salMin / 2;
  salBruto = horasTrab * valHora;
  imposto = salBruto * 0.03;
  salFinal = salBruto - imposto;
  printf("Salario a receber: R$%.2f", salFinal);
}