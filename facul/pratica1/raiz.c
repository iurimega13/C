#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int num;
  printf("Digite um número: ");
  scanf("%i", &num);

  printf("O quadrado é: %d \n", num * num);
  printf("A raiz é: %f \n", sqrt(num));

  return 0;
}