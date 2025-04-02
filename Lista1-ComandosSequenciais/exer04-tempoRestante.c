#include <stdio.h>

int main() {
	int dias, semanas, diasAdicionais;

	printf("Informe a quantidade de dias restantes para a prova de Prog I: \n");
	scanf("%d", &dias);

	semanas = dias / 7; // calcula o numero de semanas completas
	diasAdicionais = dias % 7; // calcula os dias restantes além das semanas

	printf("Faltam %d semana(s) e %d dia(s) para a prova de Prog I\n", semanas, diasAdicionais);

	return 0;
}