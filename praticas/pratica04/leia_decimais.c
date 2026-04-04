/*
- `leia_decimais.c`: Ler duas notas de um aluno fornecidas pelo usuário e exibir os valores lidos;
*/
#include <stdio.h>
int main(){
    float nota1, nota2;
    float media;
    
    printf("Bem vindo ao Sistema de Notas!\n==============================\nDigite a nota com ate duas \ncasas decimamis.\n==============================\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A media do aluno eh: %.2f\n", media);
    
    return 0;
}