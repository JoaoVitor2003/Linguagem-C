#include <stdio.h>
#include <stdlib.h>
// receber um numero e mostrar se o numero e positivo ou negativo ou neutro
int main()
{
  int numero;
  printf("Digite um Numero: ");
  scanf("%d", &numero);
 
  if (numero > 0)
  {
     printf("O numero digitado e positivo");                
  }
  if (numero < 0)
  {
     printf("O numero digitado e negativo");          
  }
  if (numero == 0)
  {
     printf("O numero digitado e neutro");
  }            
  printf("\n\n\n");
  system("PAUSE");    
  return 0;
}
