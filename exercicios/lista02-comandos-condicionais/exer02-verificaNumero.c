/*  Faça um programa que receba como entrada um número inteiro e 
    informe se ele é positivo, negativo, par, ı́mpar ou zero. 
    @mauricio 
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O número é zero.\n");
    } 
    else {
        printf("O número %d é %s e %s\n", numero,
            (numero > 0) ? "positivo" : "negativo",
            (numero % 2 == 0) ? "par." : "ímpar.");
    }
    return 0;
}
