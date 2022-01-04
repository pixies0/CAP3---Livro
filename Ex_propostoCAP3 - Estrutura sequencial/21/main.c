#include <stdlib.h>
#include <stdio.h>

/*----- Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número 
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir: 
a) a hora trabalhada vale 1/8 do salário mínimo; 
b)  a hora extra vale 1/4 do salário mínimo; 
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
d)  a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor 
da hora extra; 
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.  ----*/

int main(void)
{

  float horasTrab, salMin, horasEx, salFinal;
  printf("Digite h trabalhadas: ");
  scanf("%f", &horasTrab);
  printf("Digite o salario minimo: ");
  scanf("%f", &salMin);
  printf("Digite hrs extras: ");
  scanf("%f", &horasEx);

  float valHoraTrab = 1 * salMin / 8;
  float valHoraEx = 1 * salMin / 4;
  float salBruto = horasTrab * valHoraTrab;
  horasEx = horasEx * valHoraEx;

  salFinal = salBruto + horasEx;
  printf("R$%.2f - Salrio a receber\n", salFinal);
}