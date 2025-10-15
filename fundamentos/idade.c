#include <stdio.h>

int main(){

    // Declaração de variável
    int idade;

    // Entrada e saida de dados mais usados em C
    printf("Qual eh sua idade? ");
    scanf("%d", &idade); // scanf recebe o tipo e endereço de memória da variável como parâmetros

    printf("Sua idade eh %d anos\n", idade);
    return 0;
}