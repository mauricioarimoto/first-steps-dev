/*  Faça um programa que receba o custo de aquisição de um produto, o valor de sua venda,
    calcule e mostre o lucro obtido pelo vendedor.*/
#include <stdio.h>

int main() {
   
    float custo, precoVenda, lucro;

    printf("Informe o o custo de aquisição do produto (em R$): ");
    scanf("%f", &custo);
    
    printf("Informe o preço de venda do produto (em R$): ");
    scanf("%f", &precoVenda);

    lucro = precoVenda - custo;

    printf("O lucro obtido pelo vendedor é de : R$ %.2f\n", lucro);

    return 0;
}
