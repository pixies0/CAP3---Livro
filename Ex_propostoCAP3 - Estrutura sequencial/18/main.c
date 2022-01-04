#include <stdlib.h>
#include <stdio.h>

/* --- Faça  um  programa  que  receba  uma  temperatura  em  celsius,  calcule  e  mostre  essa  temperatura  em  
Fahrenheit. sabe-se que F = 9* c /5 + 32. --- */

int main(void)
{

  float tempCel;
  printf("Digite a temperatura: ");
  scanf("%f", &tempCel);
  float tempFah = tempCel * 9 / 5 + 32;
  printf("%.2f graus Fahrenheit\n", tempFah);
}
