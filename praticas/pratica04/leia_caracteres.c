/*
- `leia_caracteres.c`: Ler um caractere digitado pelo usuário 
e imprimir o caractere informado e seu respectivo código na tabela **ASCII**;
*/
#include <stdio.h>
int main() {
    char caracter;

    printf("Digite um caractere: ");
    scanf("%c", &caracter);
    printf("caractere: %c\ncodigo ASCII: %i\n", caracter, caracter);

    return 0;
}