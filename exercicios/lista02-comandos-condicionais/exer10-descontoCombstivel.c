/*  Faça um programa em que a pessoa deve responder 3 perguntas sobre o perfil de gamer
    que ela é, por exemplo: Você prefere jogar “Valorant ou Minecraft?”, “Sozinho ou com
    amigos/colegas?”, “À noite ou durante o dia?”. Com base nas respostas fornecidas, o
    programa informa o perfil de gamer que ela é, por exemplo: “Gamer competitivo!”, “Gamer
    casual”, “Gamer versátil”. Regra:
        Etanol: até 20 l -> 4% desconto, acima de 20l -> 7% desconto
        Gasolina: até 20l -> 5% desconto, acima de 20l -> 9% descnto
    @mauricio
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char tipoCombustivel;
    float litros, precoLitro, precoTotal, desconto, valorDesconto, precoFinal;

    printf("Inform o tipo de combustível (e: etanol, g: gasolina): ");
    scanf(" %c", &tipoCombustivel);

    char tipo = tolower(tipoCombustivel);

    printf("Informe a quantidade de litros: ");
    scanf("%f", &litros);

    if (tipo == 'e') {
        precoLitro = 4.50;
        desconto = (litros <= 15) ? 0.04 : 0.07;
    } else if (tipo == 'g') {
        precoLitro = 5.80;
        desconto = (litros <= 20) ? 0.05 : 0.09;
    }
    else {
        printf("Opção invãlida !\n");
    }

    precoTotal = litros * precoLitro;
    valorDesconto  = precoTotal * desconto;
    precoFinal = precoTotal - valorDesconto;

    printf("\nValor sem desconto: R$%.2f", precoTotal);
    printf("\nDesconto aplicado: R$%.2f", valorDesconto);
    printf("\nValor final a pagar: R$%.2f\n", precoFinal);

    return 0;
}