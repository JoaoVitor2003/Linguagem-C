#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main2() 
{
	int idade;
	int anoatual;
	int anonascimento;
	
	printf("Digite o ano atual:");
	
	scanf("%d", &anoatual);
	
	printf ("Digite a idade:");
	
	scanf("%d", &idade);
	
	anonascimento = anoatual - idade;
	
	printf("O ano de nascimento e %d, e a sua idade e %d \n", anonascimento, idade);
	
	system("PAUSE");
	return 0;
}
