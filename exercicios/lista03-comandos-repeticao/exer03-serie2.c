/*	Faça um programa que calcule e exiba o valor de S, em que S é dado por: 
	S = 1/1 + 3/2 + 5/3 + 7/4 + . . . + 99/50 
	@mauricio
*/

#include <stdio.h>

int main() {
	
	int num, den; 
	float s = 0; 

	num = den = 1;
	do {
			s = s + (float) num / den; 
			num += 2; 
			den++;
	} while (den <= 50);

	printf("S = %f\n", s);
	return 0;
}