#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N;
  printf("Digite um número: ");
  scanf("%d", &N);

  if (N % 3 == 0 && N % 7 == 0)
  {
    printf("%d é divisivel por 3 e 7!", N);
  }
  else
  {
    printf("%d não é divisivel por 3 e 7!", N);
  };

  return 0;
}