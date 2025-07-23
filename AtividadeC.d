#include <stdio.h>

int main()
{
    float Celsius, Fah;

    printf ("Informe a temperatura em graus Celsius: ");
    scanf ("%f", &Celsius);

    Fah = (9 * Celsius + 160) / 5;

    printf ("A temperatura em graus Fahrenheit é: %f", Fah);

    return 0;
}
