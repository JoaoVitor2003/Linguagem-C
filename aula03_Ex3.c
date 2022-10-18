#include <stdio.h>
#include <stdlib.h>
// mostrar todos os numeros entre 0 e 10 (somente os numeros pares)
int main()
{
    int contador=0;
    while (contador <= 10)
    {
       printf("%d \n", contador);      
       contador+=2;   // contador = contador + 2
    }
  system("PAUSE");    
  return 0;
}
