#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*------ Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar 
sua ponta. ------*/

int main(void)
{

  float altura, anguloBase, anguloAltura, base, hipo;
  printf("Digite a medida do angulo: ");
  scanf("%f", &anguloBase);
  printf("Digite a distancia: ");
  scanf("%f", &base);
  hipo = base / cos(anguloBase);

  if (hipo < 0)
  {
    hipo = hipo * (-1);
  }

  altura = sqrt(pow(hipo, 2) - pow(base, 2));
  anguloAltura = 180 - (90 + anguloBase);

  printf("A medida da escada: %.2f\n", hipo);
  printf("Altura: %.2f\n", altura);
  printf("Os angulos: 90, %.2f, %.2f", anguloBase, anguloAltura);
}