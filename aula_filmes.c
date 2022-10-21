#include <stdio.h>
#include <stdlib.h>
// Enquete Filmes (1-Shrek, 2-Carros, 3-Como treinar seu dragão)
int main()
{
   int qtdShrek = 0, qtdCarros=0, qtdDragao=0;
   int voto=10;
   
   while (voto != 0)
   {
      printf("\n================\n");
      printf("[0] - Sair da Enquete \n");
      printf("[1] - Shrek \n");
      printf("[2] - Carros \n");
      printf("[3] - Como treinar seu dragao \n");
      printf("Qual e o melhor filme na sua escolha: ");
      scanf("%d", &voto);
     
      if (voto==1)
      {  qtdShrek++; }
      if (voto==2)
      {  qtdCarros++; }
      if (voto==3)
      {  qtdDragao++; }
   }    
   
   printf("\n====== Resultados ======\n");
   printf("\n O filme Shrek teve %d votos", qtdShrek);
   printf("\n O filme Carros teve %d votos", qtdCarros);
   printf("\n O filme Como treinar seu dragao teve %d votos \n", qtdDragao);
   
  system("PAUSE");    
  return 0;
}
