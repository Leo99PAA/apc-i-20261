#include <stdio.h>
int main(){
    char nome[]= "Leonardo Pultrini";
    int idade = 26;
    char sexo = 'M';
    float altura = 1.88;
    double peso = 60.5;
    char tipo_sanguinio[] = "O+";
    printf("Dados do Passiente:\n========================\nNome: %s\nIdade: %i\nSexo: %c\nAltura: %.2f\nPeso: %.1f\nTipo Sanguinio: %s\n========================",nome, idade, sexo, altura, peso, tipo_sanguinio);
    return 0;
}