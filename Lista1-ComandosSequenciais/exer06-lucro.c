#include <stdio.h>

int main() {
   
    float custo, precoVenda, lucro;

    // Entrada de dados
    printf("Informe o o custo de aquisição do produto (em R$): ");
    scanf("%f", &custo);
    
    printf("Informe o preço de venda do produto (em R$): ");
    scanf("%f", &precoVenda);

    lucro = precoVenda - custo;

    // Saída de dados
    printf("O lucro obtido pelo vendedor é de : R$ %.2f\n", lucro);

    return 0;
}
