#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num1, num2, soma=0;
	
	printf("Digite um numero:");
	scanf("%d", &num1);
	
	printf("Digite outro numero:");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	printf("O resultado da soma: %d \n", soma);
	
	system("PAUSE");
	return 0;
}
