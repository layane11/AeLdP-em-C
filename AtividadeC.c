#include <stdio.h>

int main()
{
    int n1, n2, adicao, sub, mult, divi, rest;

    printf ("informe um numero inteiro: ");
    scanf ("%d", &n1);
    printf ("informe outro numero inteiro: ");
    scanf ("%d", &n2);

    adicao = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    divi = n1/n2;
    rest = n1 % n2;

    printf ("Resultado das operações entre os numeros digitados: \n");
    printf ("Soma: %d\n", adicao);
    printf ("Subtração: %d\n", sub);
    printf ("Multiplicação: %d\n", mult);
    printf ("Quociente: %d\n", divi);
    printf ("Resto: %d\n", rest);

    return 0;
}
