/*	Faça um programa que leia um número inteiro e verifique se ele é um número primo ou não.
	@mauricio
*/
#include <stdio.h>

int main() {
	int n;

	printf("Entre com um número inteiro:\n");
	scanf("%d", &n);

	int i = 1, divisor = 0;
	while (i <= n) {
		if (n % i == 0) { // primo qd n é divisível por 1 e por ele mesmo
			divisor++;
		}
		i++;
	}
	// até dois divisores: por 1 e por ele mesmo
	if (divisor == 2) {
		printf("O número %d é primo\n", n);
	}
	else {
		printf("O número %d não é primo\n", n);
	}
	return 0;
}