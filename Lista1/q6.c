#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct
{
  float nota1;
  float nota2;
  char nome[100];
  float media;
} Aluno;

int main(){

  int i;
  Aluno listaAlunos[TAM];
  
  for(i=0; i<TAM; i++){
    
    printf("\nAluno %d\n", i+1);
    printf("Nome: ");
    getchar();
    fgets(listaAlunos[i].nome,100,stdin);
    printf("Nota 1: ");
    scanf("%f", &listaAlunos[i].nota1);
    printf("Nota 2: ");
    scanf("%f", &listaAlunos[i].nota2);
    listaAlunos[i].media = (listaAlunos[i].nota1 + listaAlunos[i].nota2)/2;
    fflush(stdin);
  }

  printf("\n\n##  EXIBICAO  ##\n\n");
  

  for(i=0; i<TAM; i++){
    
    printf("Nome: %s", listaAlunos[i].nome);
    printf("Nota 1: %.2f", listaAlunos[i].nota1);
    printf("\nNota 2: %.2f", listaAlunos[i].nota2);
    printf("\nMedia: %.2f", listaAlunos[i].media);

    if(listaAlunos[i].media > 7.0){
      printf("\nSituação: AP");
    }
    else{
      printf("\nSituação: RP");
    }
    
    printf("\n\n");

  }

  
    
  return 0;
  
}