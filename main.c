#include <stdio.h>
#include "MinhaBiblioteca.h"

int main(void) {
  int qtdInteiros;
  int inteiros[50];
  printf("Escreva o tamanho do vetor: ");
  scanf("%d", &qtdInteiros);
  printf("Escreva uma cadeia com os numeros inteiros:\n");
  for(int i = 0; i < qtdInteiros; i++){
    scanf("%d", &inteiros[i]);
  }

  int maximo = inteiros[0];
  int minimo = inteiros[0];

  pegaMaximoMinimo(inteiros, &maximo, &minimo, qtdInteiros);

  for(int i = 0; i < qtdInteiros; i++){
    printf("%d", inteiros[i]);

    if(i < (qtdInteiros - 1 )){
      printf(",");
    }
  }
  printf("\nMax=%d, min=%d", maximo, minimo);
}