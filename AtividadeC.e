#include <stdio.h>

int main()
{
    float Celsius, Fah;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &Fah);

    Celsius = ((Fah - 32) * 5)/9;

    printf("A temperatura em Celsius é: %f", Celsius);

    return 0;
}
