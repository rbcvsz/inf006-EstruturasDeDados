#include <stdio.h>

int main(){

  int qtda = 5000000, qtdb = 7000000, ano =0;
  float taxa = 0.03, taxb = 0.02;

  /*Dado um pais A, com 5.000.000 de habitantes e uma taxa de natalidade de
3% ao ano, e um pais B com 7.000.000 de habitantes e uma taxa de
natalidade de 2% ao ano. calcular e imprimir o tempo necessário para que
a população do pais A ultrapasse a população do pais B*/

  while(qtda < qtdb){
    qtda = qtda + qtda*taxa;
    qtdb = qtdb + qtdb*taxb;
    ano++;
  }

  printf("A populacao de A ultrapassara a de B em %d anos", ano);
  
}