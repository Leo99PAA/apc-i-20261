#include <stdio.h>
int main() {
    //Declarei as variaveis.

    char MT1[20], MT2[20], MT3[20], MT4[20], nome[50];
    float a1_MT1, a2_MT1, a3_MT1, mf_MT1;
    float a1_MT2, a2_MT2, a3_MT2, mf_MT2;
    float a1_MT3, a2_MT3, a3_MT3, mf_MT3;
    float a1_MT4, a2_MT4, a3_MT4, mf_MT4;

    //Entrada de dados
    printf("---------------------------------------\n");
    printf("           Cadastro de Notas           \n");
    printf("---------------------------------------\n");
    printf("Digite o nome do aluno:");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite o nome da primeira disciplina:");
    scanf("%s", MT1);
    printf("Digite a nota da A1:");
    scanf("%f", &a1_MT1);
    printf("Digite a nota da A2:");
    scanf("%f", &a2_MT1);
    printf("Digite a nota da A3:");
    scanf("%f", &a3_MT1);
    mf_MT1 = (a1_MT1 + a2_MT1 + a3_MT1) / 3;
    printf("Digite o nome da segunda disciplina:");
    scanf("%s", MT2);
    printf("Digite a nota da A1:");
    scanf("%f", &a1_MT2);
    printf("Digite a nota da A2:");
    scanf("%f", &a2_MT2);
    printf("Digite a nota da A3:");
    scanf("%f", &a3_MT2);
    mf_MT2 = (a1_MT2 + a2_MT2 + a3_MT2) / 3;
    printf("Digite o nome da terceira disciplina:");
    scanf("%s", MT3);
    printf("Digite a nota da A1:");
    scanf("%f", &a1_MT3);
    printf("Digite a nota da A2:");
    scanf("%f", &a2_MT3);
    printf("Digite a nota da A3:");
    scanf("%f", &a3_MT3);
    mf_MT3 = (a1_MT3 + a2_MT3 + a3_MT3) / 3;
    printf("Digite o nome da quarta disciplina:");
    scanf("%s", MT4);
    printf("Digite a nota da A1:");
    scanf("%f", &a1_MT4);
    printf("Digite a nota da A2:");
    scanf("%f", &a2_MT4);
    printf("Digite a nota da A3:");
    scanf("%f", &a3_MT4);
    mf_MT4 = (a1_MT4 + a2_MT4 + a3_MT4) / 3;
    
    //Saida de dados
    printf("---------------------------------------\n");
    printf("           Boletim de Notas            \n");
    printf("---------------------------------------\n");
    printf("Aluno: %s\n", nome);
    printf("Disciplina    |  A1  |  A2  |  A3  | MF\n");
    printf("%s            | %.2f | %.2f | %.2f | %.2f\n", MT1, a1_MT1, a2_MT1, a3_MT1, mf_MT1);
    printf("%s            | %.2f | %.2f | %.2f | %.2f\n", MT2, a1_MT2, a2_MT2, a3_MT2, mf_MT2);
    printf("%s            | %.2f | %.2f | %.2f | %.2f\n", MT3, a1_MT3, a2_MT3, a3_MT3, mf_MT3);
    printf("%s            | %.2f | %.2f | %.2f | %.2f\n", MT4, a1_MT4, a2_MT4, a3_MT4, mf_MT4);

    return 0;
}