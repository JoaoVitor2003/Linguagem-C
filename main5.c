#include <stdio.h>
#include <stdlib.h>
//calculadora
int main() 
{
	
	float num1, num2, res = 0;
	int opcao;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite outro numero: ");
	scanf("%f", &num2);
	
	printf("[1] - Adicao \n");
	printf("[2] - Subtracao \n");
	printf("[3] - Multiplicacao \n");
	printf("[4] - Divisao \n");
	printf("\n \n Opcao: ");
	scanf("%d", &opcao);
	
	if(opcao == 1) {
		res = num1 + num2;
	}
	
	if (opcao == 2) {
		res = num1 - num2;
	}
	
	if (opcao == 3) {
		res = num1 * num2;
	}
	
	if (opcao == 4) {
		res = num1 / num2;
	}
	
	printf("\n O resultado e: %0.2f \n", res);
	
	system("Pause");
	return 0;
}
