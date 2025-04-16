/*  Faça um programa que receba dois números “x” e “y” e execute as operações especificadas
    a seguir, de acordo com a opção escolhida pelo usuário. Caso a opção escolhida seja
    inválida, o programa deve mostrar uma mensagem de erro e finalizar sua execução. Lembre-
    se de que na divisão “y“ deve ser diferente de zero. Opções: 1: Média aritmética entre x e y;
    2: Diferença do maior pelo menor número; 3: Produto entre x e y e 4: Divisão entre x e y
    @mauricio
*/
#include <stdio.h>

int main() {
    
    int x, y, opcao;

    printf("Digite os valores de x e y e opção desejada: ");
    scanf("%d%d%d", &x, &y, &opcao);

    switch (opcao) {
        case 1: printf ("Media aritmética de x e y: %d\n", (x + y) / 2); 
        break;

        case 2: 
            if (x > y) 
                printf("Diferenca do maior pelo menor número: %d\n", (x - y));
            else 
                printf("Diferenca do maior pelo menor número: %d\n", (y - x));
        break;

        case 3: printf("Produto entre x e y: %d\n", (x * y));
        break;

        case 4: 
            if (y == 0)
                printf("Impossivel dividir por 0\n");
            else 
                printf("Divisao entre x e y: %d\n", (x / y));
        break;

        default: printf("Opcao invalida !\n");
        break;
    }
    return 0;
}
   