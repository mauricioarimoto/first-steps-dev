/*  Faça um programa para mostrar na tela um triângulo de altura e largura “n” com o sinal
de asterico (*). Por exemplo, se n for igual a 4, temos:
    *
    **
    ***
    ****
    @mauricio
*/
#include <stdio.h>

int main() {
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Controla as linhas até n
        for (int j = 1; j <= i; j++) { // Imprime i astericos em cada linha
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
