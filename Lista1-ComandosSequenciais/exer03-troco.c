/* 	Uma máquina automática de café só funciona com notas de R$ 5 e nunca dá o troco. O café custa R$ 7. 
	Assim, se o cliente pedir apenas um café, ele vai perder R$ 3, pois terá que dar R$ 10, e a máquina 
	não devolverá o troco. É possı́vel comprar mais de um café em uma só compra. Logo, se o cliente colocou 
	R$ 15, significa que ele vai obter dois cafés e perderá R$ 1. Faça um programa que leia o valor que o
	cliente colocou na máquina (sempre múltiplo de 5) e imprima quanto o cliente irá perder no troco. */
#include <stdio.h>

int main() {
	int valor, troco;

	printf("\nEntre com um valor valor (múltiplo de 5): "); 
	scanf("%d", &valor);

	troco = valor % 7; 

	printf("\nTroco -> %d\n", troco);

	return 0;
}
