/* Faça um programa que receba três números e ordene-os de forma crescente. 
   Desafio: tente utilizar até 4 comandos if. 
   @mauricio*/
#include <stdio.h>

int main() {

   float n1, n2, n3;
   float temp;

   printf("Entre com os valores de n1,n2 e n2: ");
   scanf("%f%f%f", &n1, &n2, &n3);

   printf("Números na ordem em que foram digitados %.2f %.2f %.2f:\n", n1, n2, n3);

   // n1 maior que n2
   if (n1 > n2) { 
      temp = n1; 
      n1 = n2; 
      n2 = temp; 
   }

   // n1 maior que n3
   if (n1 > n3) { 
      temp = n1; 
      n1 = n3; 
      n3 = temp; 
   }

   // n2 maior que n3
   if (n2 > n3) { 
      temp = n2; 
      n2 = n3; 
      n3 = temp; 
   }
   printf("Números em ordem crescente: %.2f, %.2f, %.2f\n", n1, n2, n3);
   return  0;
}