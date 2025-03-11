#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{ int escolhajogador, escolhacomputador;
  srand(time(0));

   printf("###jogo jokenpô###");
   printf("Pedra-1 \n");
   printf("Papel-2 \n");
   printf("tesoura-3\n");
   printf("escolha uma opcão: ");
   scanf("%d", &escolhajogador);

   escolhacomputador = rand ()% 3 + 1;

   switch (escolhajogador)
   {
   case 1: 
  printf("Jogador= Pedra- ");
    break;
    case 2: 
  printf("Jogador= Papel- ");
    break;
    case 3: 
    printf("Jogador= Tesoura- ");
      break;
   default:
   printf("opcao invalida \n");
    break;
   }

   switch (escolhacomputador)
   {
   case 1: 
  printf("computador = Pedra- ");
    break;
    case 2:
  printf("computador = Papel- ");
    break;
    case 3: 
    printf("computador = Tesoura- ");
      break;
   default:
    break;
   }

  if (escolhajogador == escolhacomputador)
  {
    printf("**Empate**\n");
  }else if ((escolhajogador == 1)&&(escolhacomputador == 3)||
            (escolhajogador == 2)&&(escolhacomputador == 1)||
            (escolhajogador == 3 )&&(escolhacomputador == 2))
  {
     printf("Parabéns voçê ganhou!\n");
  }else{
     printf("voçê perdeu!\n");
    }
  
  return 0;









































































}