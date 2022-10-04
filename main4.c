#include <stdio.h>

int main()
{
	float nota1, nota2, media = 0;
	
	printf("Digite a nota da prova: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota do trabalho: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("A sua media e de: %0.2f \n", media);
	
	system("Pause");
	return 0;
}
