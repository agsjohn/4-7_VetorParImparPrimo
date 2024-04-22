#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

main() {
  int vet[TAM], x, par, mod, div, cont, cont2 = 0;
  for(x = 0; x < TAM; x++){
    printf("Digite o %iº número: ", x + 1);
    scanf("%i", &vet[x]);
  }
  getchar();
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Números pares: ");
  for(x = 0; x < TAM; x++){
    par = vet[x] % 2;
    if(par == 0){
      if(cont2 == 0){
        printf("%i", vet[x]);
        cont2 = 1;
      }
      else{
        printf(" - %i", vet[x]);
      }
    }
  }
  cont2 = 0;
  printf("\nNúmeros ímpares: ");
  for(x = 0; x < TAM; x++){
    par = vet[x] % 2;
    if(par != 0){
      if(cont2 == 0){
        printf("%i", vet[x]);
        cont2 = 1;
      }
      else{
        printf(" - %i", vet[x]);
      }
    }
  }
  cont2 = 0;
  printf("\nNúmeros primos: ");
  for(x = 0; x < TAM; x++){
    div = 0;
    mod = 0;
    do{
      div = div + 1;
      cont = vet[x] % div;
      if(cont == 0){
        mod = mod + 1;
      }
    }while(div != vet[x]);
    if(mod == 2){
      if(cont2 == 0){
        printf("%i", vet[x]);
        cont2 = 1;
      }
      else{
        printf(" - %i", vet[x]);
      }
    } 
  }
  getchar();
}