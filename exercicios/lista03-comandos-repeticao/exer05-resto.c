/*	Faça um programa que receba 2 números inteiros quaisquer representados por x e y e mostre, em ordem crescente, 
	todos os números entre x e y cujo resto da divisão deles programa5 for igual a 2 ou igual a 3. 
	@mauricio
*/
#include <stdio.h>

int main() {
	int x, y;

	printf("Entre com os valores de x e y:\n");
	scanf("%d%d", &x, &y);

	// x e y podem não estar em ordem crescente
	if (x > y) {
		int aux = x;
		x = y;
		y = aux;
	}
	
	for (int i = x+1; i <= y; i++) {
		if (i % 5 == 2 || i % 5 == 3) 
			printf("%d ", i);
	}
	return 0;
}