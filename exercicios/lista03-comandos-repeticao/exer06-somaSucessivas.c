/*	Faça um programa que receba como entrada dois números inteiros e realize a multiplicação
	deles sem utilizar o operador de multiplicação (*).
	@mauricio
*/
#include <stdio.h>

int main() {
	int x, y, resultado, i;

	printf("Entre com dois números inteiros: \n");
	scanf("%d%d", &x, &y);

	resultado = 0;
	for (int i = 0; i < x; i++) {
		resultado += y;
	}
	printf("Resultado: %d\n", resultado);
	return 0;
}