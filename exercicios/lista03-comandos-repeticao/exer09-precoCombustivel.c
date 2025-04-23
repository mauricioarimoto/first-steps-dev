/* Uma distribuidora de combustı́veis pretende dar um aumento em função da quantidade de combustı́vel comprado 
	anualmente por seus clientes. Os postos que consomem em média até 50.000 litros de combustı́vel ao mês, 
	terão aumento de 27%. Já os postos que consomem acima desta média, terão 18% de aumento. Faça um programa 
	que receba o código e o consumo mensal de vários postos, calcule e mostre qual será o preço do litro de 
	combustı́vel para cada um, levando-se em conta que hoje a distribuidora cobra R$3.77 por litro.
	@mauricio
*/
#include <stdio.h>

#define PRECO 3.77

int main() {
	int codigo;
	float consumoMensal, precoFinal;
	char continuar;

	do {
		printf("Código e Consumo Mensal do posto: ");
		scanf("%d%f", &codigo, &consumoMensal);
		if (consumoMensal <= 50000) {
			precoFinal = PRECO * 1.27; // 27%
		}
		else {
			precoFinal = PRECO * 1.18; // 18%
		}

		printf("CÓDIGO POSTO: #%d\nPREÇO A PAGAR: R$%.2f\n", codigo, precoFinal);

		printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar); 

	} while (continuar == 's' || continuar == 'S');
	return 0;
}
