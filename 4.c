#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static double ler_double(void) {
    char buf[128];
    if (scanf(" %127s", buf) != 1) {
        printf("Entrada invalida.\n");
        exit(1);
    }
    // Troca vírgula por ponto para aceitar 2,5
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == ',') buf[i] = '.';
    }
    char *endptr;
    double v = strtod(buf, &endptr);
    if (*endptr != '\0') {
        printf("Numero invalido.\n");
        exit(1);
    }
    return v;
}

int main(void) {
    int opcao;

    printf("Menu de Operacoes:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao (1-4): ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida para a opcao.\n");
        return 1;
    }

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite o primeiro numero (ex.: 2.5 ou 2,5): ");
    double num1 = ler_double();

    printf("Digite o segundo numero (ex.: 3.1 ou 3,1): ");
    double num2 = ler_double();

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 == 0.0) {
                printf("Erro: divisao por zero!\n");
            } else {
                printf("Resultado: %.2f\n", num1 / num2);
            }
            break;
    }
    return 0;
}
