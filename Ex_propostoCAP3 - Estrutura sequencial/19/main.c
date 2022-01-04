#include <stdlib.h>
#include <stdio.h>

/* ----  sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W 
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre 
a sua área (em m2) e a potência de iluminação que deverá ser utilizada. ---- */

int main(void)
{

  float larg, comp;
  printf("Digite as dimensoes em m: ");
  scanf("%f %f", &larg, &comp);
  float area = larg * comp;
  float pot = 18 * area;
  printf("%.2f m2 - Area\n", area);
  printf("%.2f W - Potencia a utilizar", pot);
}