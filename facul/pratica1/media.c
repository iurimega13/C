#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2, num3, num4;
  double media;

  printf("Digite o primeiro número: ");
  scanf("%i", &num1);

  printf("Digite o segundo número: ");
  scanf("%i", &num2);

  printf("Digite o terceiro número: ");
  scanf("%i", &num3);

  printf("Digite o quarto número: ");
  scanf("%i", &num4);

  media = (num1 + num2 + num3 + num4) / 4;

  printf("A média é: %.2f", media);
  return 0;
}
