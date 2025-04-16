/* 	Faça um programa que receba a categoria e o percurso em quilometros,  calcule e mostre o 
	consumo estimado de combustível do carro. Existem as categorias ``a'' que faz 15 km/l, ``b'' 
	que faz 12 km/l e ``c'' que faz 10 km/l. Todos abastecidos com gasolina.
	@mauricio
*/ 
#include <stdio.h>

int main() {
	char categoria;
	float percurso, consumoEstimado;

	printf("Digite o tipo de carro <a, b ou c>: ");
	scanf("%c", &categoria);
	printf("Digite o percurso em km/l: ");
	scanf("%f", &percurso);

	switch (categoria) {
	case 'a':
		consumoEstimado = percurso * 0.15;
		printf("Consumo estimado do carro: %.f km/l\n", consumoEstimado);
	break;
	case 'b':
		consumoEstimado = percurso * 0.12;
		printf("Consumo estimado do carro: %.f km/l\n", consumoEstimado);
	break;
	case 'c':
		consumoEstimado = percurso * 0.1;
		printf("Consumo estimado do carro: %.fkm/l\n", consumoEstimado);
	break;
	default:
		printf("Categoria de carro inválida!");
	}
	return 0;
}