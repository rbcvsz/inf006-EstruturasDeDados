#include <stdio.h>
#define TAM 5

/*Criar programa que leia dados de 20 elementos inteiros. imprimir o maior
e o menor, sem ordenar, o percentual de números pares e a media dos
elementos do vetor.
  */

int main(){

  int vet[TAM], i, maior, menor, totalpares=0, soma=0;
  float media, percentpares;

  printf("Informe os numeros do vetor:\n");
  for(i=0; i<TAM; i++){
    scanf("%d", &vet[i]);
    
    soma = soma +vet[i];
    
    if(vet[i]%2 ==0){
      totalpares++;
    }
  }

  maior = menor = vet[0];

  for(i =0; i<TAM; i++){
    if(vet[i]<menor){
      menor = vet[i];
    }
    if(vet[i]>maior){
      maior = vet[i];
    }
  }

  media = soma/TAM;
  percentpares = totalpares/TAM;

  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);
  printf("Percentual de pares: %.2f\n", percentpares);
  printf("Media do vetor: %.2f\n", media);
  
  
  return 0;

}