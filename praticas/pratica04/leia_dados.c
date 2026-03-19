/*
- `leia_dados.c`: Ler a idade, a altura (ex.: `1.75`), o sexo (`M` ou `F`) 
e o peso (ex.: `72.825` de uma pessoa e exibir todas as informações organizadas em formato de ficha cadastral.
*/
#include <stdio.h>
int main () {
    char nome[50];
    int idade;
    char sexo;
    float altura, peso;
    char tipo_sanguinio[3];
    printf("       Ficha de triagem        \n==============================\n");
    printf("Digite o nome do paciente:\n ");
    scanf("%49s", nome);
    printf("Digite a idade do paciente:\n ");
    scanf("%i", &idade);
    printf("Digite o sexo do paciente (M/F):\n ");
    scanf(" %c", &sexo);
    printf("Digite a altura do paciente (ex.: 1.75):\n ");
    scanf("%f", &altura);
    printf("Digite o peso do paciente (ex.: 72.825):\n ");
    scanf("%f", &peso);
    printf("Digite o tipo sanguíneo do paciente:\n ");
    scanf("%3s", tipo_sanguinio);
    printf("Dados do Paciente:\n==============================\nNome: %s\nIdade: %i\nSexo: %c\nAltura: %.2f\nPeso: %.1f\nTipo Sanguinio: %s\n==============================\n",nome, idade, sexo, altura, peso, tipo_sanguinio);
    

    return 0;
}