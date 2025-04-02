#include <stdio.h>

int main() {

    float preco, percentualDesconto, precoFinal;

    // Entrada de dados
    printf("Informe o preço do produto (em R$); ");
    scanf("%f", &preco);
    
    printf("Informe o percentual de desconto: ");
    scanf("%f", &percentualDesconto);

    // Cálculo do preço final com desconto usando o fator de multiplicacao
    precoFinal = preco * (1 - percentualDesconto / 100);
    //precoFinal = preco - (preco * percentualDesconto / 100);

    // Saída de dados
    printf("O preço final com o desconto é: R$ %.2f\n", precoFinal);

    return 0;
}
