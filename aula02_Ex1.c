#include <stdio.h>
#include <stdlib.h>
// montar um programa que receba um numero e mostre se o mesmo é
// positivo, negativo ou neutro
int main()
{
    int numero;
   
    printf("Digite um Numero: ");
    scanf("%d", &numero);
   
    if (numero > 0)
    {
       printf("O numero e positivo");        
    }else{
       // caso a condição seja avaliada como falso
       if (numero < 0)
       {
           printf("O numero e negativo");      
       }else{
           printf("O numero e neutro");      
       }            
    }      
   
  printf("\n\n\n");
  system("PAUSE");    
  return 0;
}
