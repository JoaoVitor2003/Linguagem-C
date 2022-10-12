#include <stdio.h>
#include <stdlib.h>
// receber um numero e mostrar o dia correspondente na semana
int main(int argc, char *argv[])
{
    int numero;
   
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &numero);
   
    switch(numero) {
       case 1:
            printf("Domingo!");
            break;              
       case 2:
            printf("Segunda-feira!");
            break;
       case 3:
            printf("Terça-feira!");
            break;
       case 4:
            printf("Quarta-feira!");
            break;
       case 5:
            printf("Quinta-feira!");
            break;
       case 6:
            printf("Sextouooooo");
            break;
       case 7:
            printf("Sabado");
            break;
       default:
            printf("O numero digitado nao esta entre 1 e 7");
            break;                                  
    }
    printf("\n\n\n");
  system("PAUSE");    
  return 0;
}
