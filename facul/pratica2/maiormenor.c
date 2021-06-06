#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, maior = 0, menor = 0;
  for (int i = 1; i < 6; i++)
  {
    printf("Digite o %d número: ", i);
    scanf("%d", &N);

    if (maior == 0 && menor == 0)
    {
      maior = N;
      menor = N;
    };
    if (N > maior)
    {
      maior = N;
    };
    if (N < menor)
    {
      menor = N;
    };
  };

  printf("Maior número: %d \n", maior);
  printf("Menor número: %d \n", menor);

  return 0;
}