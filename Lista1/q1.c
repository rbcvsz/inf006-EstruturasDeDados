#include <stdio.h>

int main(){

  float massai, massaf;
  int tempo = 0, hora, min, seg;

  printf("Informe a massa do material radioativo: ");
  scanf("%f", &massai);

  massaf = massai;

  while(massaf >= 0.1){
    massaf = massaf-(massaf*0.25);;
    tempo = tempo +30;
  }
  

  hora = tempo/3600;
  min =(tempo%3600)/60;
  seg =(tempo%3600)%60;
  printf("Tempo:%ih %im %is",hora,min,seg);

  /*
  printf("\nMassa fim: %f", massaf);
  printf("\nTempo: %d", tempo);
  */
  
    return 0;
}