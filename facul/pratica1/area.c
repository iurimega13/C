#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float R, A, P, PI = 3.1415;

  printf("Digite o raio: ");
  scanf("%f", &R);

  A = PI * pow(R, 2);
  P = 2 * PI * pow(R, 2);

  printf("A área é: %.2f \n", A);
  printf("O perímetro é: %.2f \n", P);
  return 0;
}