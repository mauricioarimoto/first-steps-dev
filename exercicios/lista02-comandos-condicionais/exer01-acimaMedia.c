/* 	Faça um programa que receba como entrada três números positivos em ponto flutuante, 
	em seguida, mostre quantos deles estão acima da média aritmética.
	@mauricio 
*/

#include <stdio.h>

int main() {
	float numero1, numero2, numero3;

	printf("Entre com três números reais positivos: ");
	scanf("%f%f%f", &numero1, &numero2, &numero3);

	float mediaAritmetica = (numero1 + numero2 + numero3) / 3;
	int total = 0; // Contabilizar quantos estão acimada média
	if (numero1 > mediaAritmetica) {
		total++;
	}
	if (numero2 > mediaAritmetica) {
		total++;
	}
	if (numero3 > mediaAritmetica) {
		total++;
	}

	printf("Total de números acima da média aritmética: %d\n", total);
	return 0;
}