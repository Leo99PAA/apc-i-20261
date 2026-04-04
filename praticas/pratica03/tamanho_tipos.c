/*- `tamanho_tipos.c`: Utilizar o operador `sizeof()` para imprimir o tamanho (em bytes)
 dos seguintes tipos: `char`, `short int`, `int`, `long int`, `long long int`, `float`, `double` e `long double`;*/ 
 #include <stdio.h>
 int main() {
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(short int));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(long int));
    printf("%zu\n", sizeof(long long int));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));
    return 0;
 }