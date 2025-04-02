/* 	Faça um programa que leia dois valores x e y e permute o conteúdo das duas variáveis, ou seja, 
	o valor de x ser armazenado em y e vice-versa. Ao final, mostre o conteúdo das variáveis.*/
#include <stdio.h>

int main() {

	int x, y, aux; 

	printf("Entre com os valores de x e y: ");
	scanf("%d%d", &x, &y);

	aux = x;
	x = y;
	y = aux;

	printf("\nValores de x e y apos permuta: %d %d\n", x, y);
	return 0;
}
