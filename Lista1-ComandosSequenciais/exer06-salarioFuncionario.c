#include <stdio.h>

int main() {
	int numero,horas;
  	double valor_horas, salario;

  	//printf("\n Numero: ");
  	scanf("%i", &numero);
  	//printf("\nHoras: ");
  	scanf("%d", &horas);
  	//printf("\nValor: ");
  	scanf("%lf", &valor_horas);

  	salario = horas * valor_horas;
  	printf("NUMBER = %d\n", numero);
  	printf("SALARY = R$ %.2lf\n", salario);
  	return 0;
}