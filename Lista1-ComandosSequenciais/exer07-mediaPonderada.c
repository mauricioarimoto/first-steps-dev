/*  Faça um programa que receba quatro notas da disciplina de Programação I, quatros pesos
    diferentes para cada nota, calcule e mostre a sua média ponderada.*/
#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4;
    double mediaPonderada;
    int peso1, peso2, peso3, peso4;

    //Entrada dos valores
    printf("Entre com a nota 1 e o seu peso: ");
    scanf("%lf%d", &nota1, &peso1);

    printf("Entre com a nota 2 e o seu peso: ");
    scanf("%lf%d", &nota2, &peso2);

    printf("Entre com a nota 3 e o seu peso: ");
    scanf("%lf%d", &nota3, &peso3);

    printf("Entre com a nota 1 e o seu peso: ");
    scanf("%lf%d", &nota4, &peso4);

    // Calculo da media ponderada
    mediaPonderada = (nota1*peso1 + nota2*peso2 + nota3*peso3 + nota4*peso4) / (peso1 + peso2 + peso3 + peso4);

    // Exibe os resultados;
    printf("Média ponderada: %.2f\n", mediaPonderada);

    return 0;
}