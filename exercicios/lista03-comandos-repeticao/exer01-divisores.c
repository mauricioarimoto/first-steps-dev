/*	Faça um programa que leia um número inteiro, calcule e mostre todos os seus divisores,
	bem como a quantidade de divisores existentes. 
	@mauricio
*/
#include <stdio.h>

int main() {
	int numero, contaDivisor;

	printf("Entre com um número inteiro: ");
	scanf("%d", &numero);

	contaDivisor = 0;
	printf("\nDivisores de %d: ", numero);
	for (int i = 1; i <= numero; i++) {
		if (numero % i == 0) {
			printf("%d ", i);
			contaDivisor++;
		}
	}
	printf("\nTotal de divisores de %d: %d \n", numero, contaDivisor);
	return 0;
}