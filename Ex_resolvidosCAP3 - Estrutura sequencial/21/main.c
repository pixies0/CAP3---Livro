#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a 
que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em 
que deseja pregar o quadro.
lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar. */

int main(void)
{

  int x, y, z;
  printf("Digite o tamanho da escada: ");
  scanf("%d", &z);
  printf("Digite a altura: ");
  scanf("%d", &x);
  y = z * z - x * x;
  y = sqrt(y);
  printf("%d e a distancia que a escada deve estar", y);
}