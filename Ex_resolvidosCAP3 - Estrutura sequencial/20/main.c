#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*  Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no 
chão e encostada na parede e a altura da parede onde está a ponta da escada. calcule e mostre a me-
dida dessa escada.
Observação:  as  funções  trigonométricas  implementadas  nas  linguagens  de  programação  trabalham  
com medidas de ângulos em radianos.*/

int main(void)
{

  float ang, altura, escada, radiano;
  printf("Digite o valor do angulo: ");
  scanf("%f", &ang);
  printf("Digite a altura da parede: ");
  scanf("%f", &altura);
  radiano = altura * 3.14 / 180;
  escada = altura / sin(radiano);
  printf("%.2f e altura da escada", escada);
}