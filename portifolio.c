#include <stdio.h>
#include <stdlib.h>

//Zoológico

int main() {
	
	int qtdAnimais, qtdComida;
	float custo = 0;
	int opcao;
	float custopordia = 0;
	float custopormes = 0;
	
	printf("Escolha um animal: \n");
	
	printf("[1] - Onca Parda \n");
	printf("[2] - Lobo-Guara \n");
	printf("[3] - Ema \n");
	printf("[4] - Jacare \n");
	printf("[5] - Gaviao \n");
	printf("\n \n Opcao: ");
	scanf("%d", &opcao);
	
	printf("Digite a quantidade de animais: \n");
	scanf("%d", &qtdAnimais);
	
	printf("Qual o custo do alimento: \n");
	scanf("%f", &custo);
	
	if (opcao == 1) {
		qtdComida = 25;
	}
	
	if (opcao == 2) {
		qtdComida = 11;
	}
	
	if (opcao == 3) {
		qtdComida = 2;
	}
	
	if (opcao == 4) {
		qtdComida = 2;
	}
	
	if (opcao == 5) {
		qtdComida = 3;
	}
	
	custopordia = (qtdAnimais * qtdComida) * custo;
	printf("O valor por dia e de: %0.2f \n", custopordia);
	custopormes =  custopordia * 30;
	printf("E o valor por mes e de: %0.2f \n", custopormes);
	
	system("Pause");
	return 0;
}
