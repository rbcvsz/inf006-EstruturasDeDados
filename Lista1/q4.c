#include <stdio.h>

/*
Chico tem 1.50m e cresce 2 centímetros por ano, enquanto Juca tem 1.10m e
cresce 3 cm por ano. construir um programa que calcule e imprima
quantos anos serão necessários para Juca seja maior que Chico;
*/

int main(){

  int hchico = 150, hjuca = 110;
  int tempo=0, tchico = 2, tjuca = 3;

  while (hjuca <= hchico){
    hchico = hchico +tchico;
    hjuca = hjuca + tjuca;
    tempo++;
  }

  printf("Juca sera maior que Chico em %d anos", tempo);

  return 0;

}