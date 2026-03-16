/*- `tipos_especiais.c`: Declarar variáveis para armazenar o número de países (`195`), 
o número de idiomas (`7100`), 
a população mundial (`8274065924`) 
e a proporção áurea (`1.61803398874989484820`) e,
em seguida, imprimir esses valores utilizando os especificadores de formato corretos.*/
#include <stdio.h>
int main(){
    short int num_paises = 195;
    int num_idiomas = 71000;
    long long int populacao_mundial = 8274065924;
    long double proporcao_aurea = 1.61803398874989484820;

    printf("numero de paises: %hi\n", num_paises);
    printf("numero de idiomas: %i\n", num_idiomas);
    printf("populacao mundial: %lli\n", populacao_mundial);
    printf("proporcao aurea: %.20Lf\n", proporcao_aurea);   

    return 0;
}