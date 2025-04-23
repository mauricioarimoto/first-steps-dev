/*	Faça um programa para calcular e exibir as notas finais dos atletas de uma competição de ginástica rı́tmica. 
	Nesta competição cada atleta é avaliado(a) por 5 juı́zes que atribuem notas de 0.0 a 10.0. A nota final de cada 
	atleta corresponde à média aritmética notas, excluindo-se sua menor e maior nota, respectivamente. O programa 
	deve receber o total de competidores, em seguida ler de cada competidor as notas atribuı́das pelos juı́zes. Ao 
	final, o programa deve exibir notas finais de cada competidor devidamente calculadas.
	@mauricio
*/

#include <stdio.h>

int main() {
	int totalCompetidores, count, i;
	float nota, notaFinal, menorNota, maiorNota, somaNotas;

	printf("Entre com o total de competidores:\n");
	scanf("%d", &totalCompetidores);

	for (i  = 1; i<= totalCompetidores; i++) {
		menorNota = 10;
		maiorNota = 0;
		count  = somaNotas = notaFinal = 0;
		while (count < 5) {
			printf("Entre com as 5 notas do competidor[%d~] (0.00 a 10.0): \n", i);
			scanf("%f", &nota);

			if (nota < menorNota)
				menorNota = nota;
			if (nota > maiorNota)
				maiorNota = nota;
			
			somaNotas += nota;
			count++;
		}
		notaFinal += (somaNotas - menorNota - maiorNota) / 3;
		printf("Nota final do competidor[%d~]: %.2f \n", i, notaFinal);
	}
	return 0;
}