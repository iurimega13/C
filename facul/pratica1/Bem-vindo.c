#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[30];
  printf("Digite seu nome: ");
  scanf("%s", &nome);

  printf("Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, %s", nome);
  return 0;
}