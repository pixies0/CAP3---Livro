#include <stdlib.h>
#include <stdio.h>

/* O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do 
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fá-
brica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor; 
b)  o valor correspondente aos impostos; 
c) o preço final do veículo. */

int main(void)
{

  float precoFab, lucroDist, imposto;
  printf("Digite o preco de fabrica: ");
  scanf("%f", &precoFab);
  printf("Valor do lucro em %%: ");
  scanf("%f", &lucroDist);
  printf("Valor do imposto em %%: ");
  scanf("%f", &imposto);
  float vallucro, valimp;
  vallucro = precoFab * (lucroDist / 100);
  valimp = precoFab * (imposto / 100);
  float total = precoFab + vallucro + valimp;
  printf("a) %.2f Valor do lucro do distribuidor\n", vallucro);
  printf("b) %.2f Valor do imposto\n", valimp);
  printf("c) %.2f Preco final do carro", total);
}