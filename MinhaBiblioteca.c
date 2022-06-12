#include <stdio.h>
#include "MinhaBiblioteca.h"

void pegaMaximoMinimo(int *inteiros, int *maximo, int *minimo, int qtdInteiros) {
  for(int i = 0; i < qtdInteiros; i++){
    if(inteiros[i] > *maximo){
      *maximo = inteiros[i];
    }

    if(inteiros[i] < *minimo){
      *minimo = inteiros[i];
    }
  }
}