#include <stdio.h>

int main(){

  int idade, menorque21=0, maiorque50=0;

  printf("Informe uma idade (-1 para terminar): ");
  scanf("%d", &idade);

  while (idade != -1){
    if (idade <21){
      menorque21++;
    }
    if (idade >50){
      maiorque50++;
    }
    printf("Informe uma idade (-1 para terminar): ");
    scanf("%d", &idade);
  }

  printf("\nMenor que 21: %d\nMaior que 50: %d", menorque21, maiorque50);

  return 0;
  
}