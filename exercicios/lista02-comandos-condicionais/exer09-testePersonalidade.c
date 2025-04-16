/* Faça um programa em que a pessoa deve responder 3 perguntas sobre o perfil de gamer
   que ela é, por exemplo: Você prefere jogar “Valorant ou Minecraft?”, “Sozinho ou com
   amigos/colegas?”, “À noite ou durante o dia?”. Com base nas respostas fornecidas, o
   programa informa o perfil de gamer que ela é, por exemplo: “Gamer competitivo!”, “Gamer
   casual”, “Gamer versátil”.
   @mauricio
*/
#include <stdio.h>

int main() {
   char resposta;
   int countA, countB;
   countA = countB = 0;

   // Pergunta 1 - Tipo de jogo
   printf("\n==== RESPONDA =====\n"); 
   printf("(a) Valorant \n(b) Minecraft \nResposta: ");
   scanf(" %c", &resposta);
   if (resposta == 'a') 
      countA++;
   else if (resposta == 'b') 
      countB;

   // Pergunta 2 - Estilo de jogar
   printf("(a) Jogar sozinho \n(b) Ou com amigos \nResposta: ");
   scanf(" %c", &resposta);
   if (resposta == 'a') 
      countA++;
   else if (resposta == 'b') 
      countB++;

   // Pergunta 3 - Quando joga
   printf("(a) Jogar à noite \n(b) Ou durante o dia \nResposta: ");
   scanf(" %c", &resposta);
   if (resposta == 'a') 
      countA++;
   else if (resposta == 'b') 
      countB++;

    // Resultado
    if (countA > countB) {
        printf("Você é focado e competitivo!\n");
    } else if (countB > countA) {
        printf("Você é casual sociável!\n");
    } else {
        printf("Você é equilibrado!\n");
    }

    return 0;
}
