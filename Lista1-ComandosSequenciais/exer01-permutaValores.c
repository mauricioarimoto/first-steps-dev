
#include <stdio.h>

int main() {

	int x, y, aux; 

	printf("Entre com os valores de x e y: ");
	scanf("%d%d", &x, &y);

	aux = x;
	x = y;
	y = aux;

	printf("\nValores de x e y apos permuta: %d %d\n", x, y);
	return 0;
}
