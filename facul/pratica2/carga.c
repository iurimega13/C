#include <stdio.h>
#include <stdlib.h>

int main()
{
  float pesoTonelada, pesoQuilos, precoDaCarga, precoImpostos, precoTotal;
  int codEstado, codCarga;

  printf("Digite o código do estado: ");
  scanf("%d", &codEstado);

  switch (codEstado)
  {
  case 1:
    precoImpostos = precoDaCarga * 0.2;
    break;
  case 2:
    precoImpostos = precoDaCarga * 0.15;
    break;
  case 3:
    precoImpostos = precoDaCarga * 0.1;
    break;
  case 4:
    precoImpostos = precoDaCarga * 0.05;
    break;
  default:
    printf("Código de estado inválido!!!");
    break;
    return 0;
  };

  printf("Digite o peso da carga em Toneladas: ");
  scanf("%f", &pesoTonelada);

  printf("Digite o código da carga: ");
  scanf("%d", &codCarga);

  if (codCarga >= 10 && codCarga <= 20)
  {
    precoDaCarga = pesoQuilos * 180;
  }
  else if (codCarga >= 21 && codCarga <= 30)
  {
    precoDaCarga = pesoQuilos * 120;
  }
  else if (codCarga >= 31 && codCarga <= 40)
  {
    precoDaCarga = pesoQuilos * 230;
  }
  else
  {
    printf("Código da carga inválido!!");
    return 0;
  };

  pesoQuilos = pesoTonelada * 1000;

  precoTotal = precoDaCarga + precoImpostos;

  printf("\n\n");
  printf("Peso em Quilos --> %.2fKg \n", pesoQuilos);
  printf("Valor da Carga --> R$ %.2f \n", precoDaCarga);
  printf("Valor dos Impostos --> R$ %.2f \n", precoImpostos);
  printf("Valor Total --> R$ %.2f \n", precoTotal);

  return 0;
};