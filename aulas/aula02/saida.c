#include <stdio.h>

int main() {
    int idade = 10;
    char nome[] = "Matheus";
    //printf("O aluno %s tem %i anos.", nome, idade);

    //%i -> inteiro e decimal
    printf("%i\n", 10+10-5);

    //%11i -> inteiro com 11 caracteres, caso seja maior colocar o numero de caracteres
    printf("%11i\n", 43515146806);

    //%04i -> inteiros com zero a esquerda adicona 0 e numero de caracteres
    printf("%011i\n", 056);

    /*%f -> numeros de ponto fluante (ex: 3.141312, 2.718286) sempre 6 casas,
    caso seja menos adicionar %.4f para 4 casas e assim por diante*/
    printf("%f\n", 3.141592);
    printf("%.3f\n", 3.151);

    return 0;
}


