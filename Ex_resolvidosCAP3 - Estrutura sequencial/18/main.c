#include <stdlib.h>
#include <stdio.h>

/* Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a 
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a 
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para 
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias. */

int main(void)
{

  float pesoSaco, comidaGato1, comidaGato2, totalFinal;
  printf("Insira o peso do Saco em Kg:");
  scanf("%f", &pesoSaco);
  printf("Peso comida gato1 em g: ");
  scanf("%f", &comidaGato1);
  printf("Peso comida gato2 em g: ");
  scanf("%f", &comidaGato2);
  comidaGato1 = comidaGato1 / 1000;
  comidaGato2 = comidaGato2 / 1000;
  totalFinal = pesoSaco - 5 * (comidaGato1 + comidaGato2);
  printf("Apos 5 dias restara %.2fkg de comida", totalFinal);
}