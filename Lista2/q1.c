#include <stdio.h>

int main(){

  int aniver = 101, dia, mes;

  while (aniver != 9999){

    printf("Informe a data da aniversario no formato ddmm (9999  para terminar): ");
    scanf("%d", &aniver);

    dia = aniver/100;
    mes = aniver%100;

    /*
    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    */

    switch(mes)
      {
        case 1:
        if (dia > 20){
          printf("Aquario\n");
        }
        else printf("Capricornio\n");
        break;
        
        case 2:
        if (dia > 20){
          printf("Peixes\n");
        }
        else printf("Aquario\n"); 
        break;
        
        case 3:
        if (dia > 20){
          printf("Aries\n");
        }
        else printf("Peixes\n");
        break;

        case 4:
        if (dia > 20){
          printf("Touro\n");
        }
        else printf("Aries\n");
        break;

        case 5:
        if (dia > 20){
          printf("Gemeos\n");
        }
        else printf("Touro\n");
        break;

        case 6:
        if (dia > 20){
          printf("Cancer\n");
        }
        else printf("Gemeos\n");
        break;

        case 7:
        if (dia > 20){
          printf("Leao\n");
        }
        else printf("Cancer\n");
        break;

        case 8:
        if (dia > 20){
          printf("Virgem\n");
        }
        else printf("Leao\n");
        break;

        case 9:
        if (dia > 20){
          printf("Libra\n");
        }
        else printf("Virgem\n");
        break;

        case 10:
        if (dia > 20){
          printf("Escorpiao\n");
        }
        else printf("Libra\n");
        break;

        case 11:
        if (dia > 20){
          printf("Sagitario\n");
        }
        else printf("Escorpiao\n");
        break;

        case 12:
        if (dia > 20){
          printf("Capricornio\n");
        }
        else printf("Sagitario\n");
        break;
        
        default:
        printf("Opcao incorreta!\n");
      }
    
    
  }

  

  return 0;
}