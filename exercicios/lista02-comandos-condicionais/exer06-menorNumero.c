// Faça um programa que receba três números inteiros e mostre qual é o menor deles.
#include <stdio.h>
int main() {
    int x, y, z;

    printf("Entre com os tres inteiros: \n");
    scanf("%d%d%d", &x, &y, &z);

    //assumir que x é o menor
    int menor = x;

    //caso que y seja menor
    if (y < menor) {
        menor = y;
    }

    //caso que z seja menor
    if (z < menor) {
        menor = z;
    }

    printf("O número %d é o menor \n", menor);
    return 0;
}