/*	Faça um programa que receba a distância percorrida (em km) de um ponto até a 
	UENP e o consumo médio do veı́culo (em km/l). Calcule e mostre quantos litros 
	seriam necessários para realizar o trajeto.*/
#include <stdio.h>

int main() {

	float distancia, consumoMedio, totalLitros;

	printf("Informe a distancia do trajeto: \n");
	scanf("%f", &distancia);

	printf("Informe o consumo medio do veículo: \n");
	scanf("%f", &consumoMedio);

	totalLitros = distancia / consumoMedio;

	printf("Você precisará de %.2f litros de combustível.\n", totalLitros);	

	return 0;
}