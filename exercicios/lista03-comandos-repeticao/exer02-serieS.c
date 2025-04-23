/*	Faça um programa que calcule e exiba o valor de S, em que S é dado por:
	S = 1/1 + 2/2 + 4/3 + 8/4 + 16/5 . . . + (100 termos)
	@mauricio
*/

#include <stdio.h>

int main() {
	
	int num, den;
	double s = 0;
	num = den = 1;
	do {
		s = s + (num / den);
		num = num * 2;
		den++;
	} while (den <= 100);
	
	printf("S = %lf\n", s);
	return 0;
}