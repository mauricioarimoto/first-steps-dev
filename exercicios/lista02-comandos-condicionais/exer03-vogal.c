/* 	Faça um programa que receba com entrada um caratecere e 
	informe se ele corresponde a uma vogal ou não.
	@mauricio
*/
#include <stdio.h>
#include <ctype.h>

int main() {
	char c;

	printf("Entre com um caractere: ");
	scanf("%c", &c);

	char caractere = tolower(c); // converte maiúscula para minúscula

	if (caractere == 'a' || caractere == 'e' || caractere == 'i' 
		|| caractere == 'o' || caractere == 'u') {
		printf("\nO o caractere '%c' é uma vogal\n", caractere);
	}
	else {
		printf("O caractere '%c' não é uma vogal\n", caractere);
	}
	return 0;
}