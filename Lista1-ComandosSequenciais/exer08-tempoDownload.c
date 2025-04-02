#include <stdio.h>

int main() {

     float tempo, tamanhoArquivo, velocidadeInternet;

    // Entrada de dados
    printf("Entre com o tamanho do arquivo (em MB); ");
    scanf("%f", &tamanhoArquivo);
    
    printf("Entre com a velocidade da Internet (em Mbps): ");
    scanf("%f", &velocidadeInternet);

    // Cálculo 
   tempo = (tamanhoArquivo / velocidadeInternet) * 8; //1 byte = bits

    printf("O tempo estimado de donwload é de %.2f\n", tempo);

    return 0;
}
