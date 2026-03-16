#include <stdio.h>
int main(){
    //Versão com um único printf
    printf("==============================\n      N O T A    L E G A L    \n==============================\nProduto         Qtd Valor Unit\n==============================\nProduto         Qtd Valor Unit\nCamiseta        %.03i      %.02f\nCalca           %.03i      %.02f\nMeia Social     %.03i      %.02f\n==============================\nTotal                   %.02f\n", 2, 39.99, 1, 89.90, 3, 19.99, 229.85);
    //Versão com mais de um printf
    /*printf("==============================\n");
    printf("      N O T A    L E G A L    \n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");
    printf("Camiseta        %.03i      %.02f\n", 2, 39.99);
    printf("Calca           %.03i      %.02f\n", 1, 89.90);
    printf("Meia Social     %.03i      %.02f\n", 3, 19.99);
    printf("==============================\n");
    printf("Total                   %.02f\n", 229.85);*/
    return 0;
}