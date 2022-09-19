#include <stdio.h>
#define TAM 3

int main(){

  int i, j, mat[TAM][TAM];

  printf("Informe os elementos da matriz %dx%d:\n", TAM, TAM);

  //Ler a matriz
  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      scanf("%d", &mat[i][j]);
    }
  }

  //Imprimir a matriz quadrada
  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
  //Imprimir os elementos da diagonal principal
  printf("Elementos da diagonal principal: \n");
  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      if(j == i){
        printf("%d ", mat[i][j]);
      }
    }
  }

  return 0;
}