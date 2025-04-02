
#include <stdio.h>

int main() {
	int valor, troco;

	printf("\nValor: "); //sempre multiplo de 5
	scanf("%d", &valor);

	troco = valor % 7; //calcula quanto o cliente perdera no troco

	printf("\nTroco -> %d\n", troco);

	return 0;
}
