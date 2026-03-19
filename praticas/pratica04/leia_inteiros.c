/*
- `leia_inteiros.c`: Ler dois números inteiros fornecidos pelo usuário e exibir os valores lidos;
*/
#include <stdio.h>
int main() {
    int numero1, numero2;
    int soma;
    printf("      Bem-vindo a calculadora de soma e subtracao!!!     \n---------------------------------------------------------\nps: para subtrair adicione o sinal de - antes de digitar\no segundo inteiro.\n---------------------------------------------------------\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &numero1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &numero2);
    soma = numero1 + numero2;
    printf("O resultado eh: %i\n", soma);
    return 0;
}