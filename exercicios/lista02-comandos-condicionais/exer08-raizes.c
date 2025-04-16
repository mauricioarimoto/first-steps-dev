/* Faça um programa para calcular as raı́zes da equação de segundo grau. O programa recebe
	como entrada os números a, b, c, que correspondem aos coeficientes da equação de segundo
	grau (ax² + bx + c = 0). Em seguida, o programa deve mostrar as raı́zes da equação.
	Caso as raı́zes não existam, uma mensagem deve ser exibida (por exemplo, “Não existem
	raı́zes reais”). Caso a equação não seja de segundo grau, uma mensagem também deve ser
	exibida (por exemplo, “Não é uma equação de segundo grau”).
	@mauricio
*/
#include <stdio.h>
#include <math.h>

int main() {
	
	float a, b, c, x1, x2, delta;
	printf("Entre com os coeficientes da equacao (a, b, c): \n");
	scanf("%f%f%f", &a, &b, &c);

	// Qd a equação não é de 2.grau
	if (a == 0) {
		printf("Não é uma equação de 2 grau\n");
	}
	else {//b²-4ac
		delta = pow(b,2) - (4 * a * c);
		if (delta < 0) { // Qd não existem raízes reais
			printf("Não existem raízes reais\n");
		}
		else { //calcula raizes
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("\nS = {%.2f, %.2f}\n", x1, x2);;
		}
	}

	return 0;
}
