#include <stdio.h>
#include "MinhaBiblioteca.h"

int main(void) {
    int qtdInteiros;
    int inteiros[50];
    scanf("%d", &qtdInteiros);

    for(int i = 0; i  qtdInteiros; i++){
    scanf(%d, &inteiros[i]);
  }

  int maximo = inteiros[0];
  int minimo = inteiros[0];

  pegaMaximoMinimo(inteiros, &maximo, &minimo, qtdInteiros);

  for(int i = 0; i  qtdInteiros; i++){
    printf(%d,, inteiros[i]);
  }
    printf(nMax=%d, min=%d, maximo, minimo);
}