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