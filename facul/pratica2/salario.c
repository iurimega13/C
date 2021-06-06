#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario;
  int cod;

  printf("Digite o salário: ");
  scanf("%f", &salario);

  printf("Digite o código do cargo: ");
  scanf("%d", &cod);
  switch (cod)
  {
  case 1:
    salario += salario * 0.4;

    printf("Servente, aumento de 40%% %.2f", salario);
    break;
  case 2:
    salario += salario * 0.35;

    printf("Pedreiro, aumento de 35%% %.2f", salario);
    break;
  case 3:
    salario += salario * 0.2;

    printf("Mestre de Obras, aumento de 20%% %.2f", salario);
    break;
  case 4:
    salario += salario * 0.4;

    printf("Técnico de Segurança, aumento de 10%% %.2f", salario);
    break;
  default:
    printf("Cargo inválido!!!");
    break;
  };

  return 0;
};