#include <stdio.h>
#include <stdlib.h>
// programa desenvolvido por Lucio
// desenvolver um jogo de JokenPo
int main()
{
    int jogador, computador;
   
    do{
       system("cls");  // limpar a tela
       printf("\n\n========JokenPo========\n\n");
       printf("[0] - Finalizar o Jogo\n");
       printf("[1] - Pedra\n");
       printf("[2] - Papel\n");
       printf("[3] - Tesoura\n\n");
       printf("Jogador qual e a sua escolha? ");
       scanf("%d", &jogador);          
       if (jogador!=0)
       {
          switch(jogador)
          {
             case 1:  
                  printf("\nO jogador escolheu Pedra");              
                  break;
             case 2:
                  printf("\nO jogador escolheu Papel");
                  break;
             case 3:
                  printf("\nO jogador escolheu Tesoura");
                  break;
             default:
                  printf("\nDigite uma opcao correta!!");
                  break;        
                         
          } // fim da estrutura escolha
          computador=("%d", rand()%3 + 1);
          switch(computador)
          {
             case 1:  
                  printf("\nO computador escolheu Pedra");              
                  break;
             case 2:
                  printf("\nO computador escolheu Papel");
                  break;
             case 3:
                  printf("\nO computador escolheu Tesoura");
                  break;                        
          } // fim da estrutura escolha
         
          // Verificar o ganhador do jogo
          if (jogador==computador)
          {
              printf("\n\nDeu empate!! \n\n");
          }else{  // se tem um ganhador
            if ((jogador==1&&computador==3)||(jogador==2&&computador==1)||(jogador==3&&computador==2))  
            {
               printf("\n\nO Jogador ganhou!!!\n\n");
            }else{
               printf("\n\nO Computador ganhou!!!\n\n");
            }                                                
          }
          system("PAUSE");          
       } // fim do if
    }while(jogador!=0);
  return 0;
}
