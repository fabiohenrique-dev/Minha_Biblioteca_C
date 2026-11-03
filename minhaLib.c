#include "minhaLib.h"

int fibonacci(int a) {
    if (a < 0)
        return -1;
    if (a <= 1)
        return a;
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int ehpar(int a) {
    return a % 2 == 0;
}

int ehpositivo(int a) {
    return a > 0;
}

int elevado(int a) {
    int resultado = 1;

    if (a < 0)
        return -1;

    for (int i = 0; i < a; i++)
        resultado *= 2;

    return resultado;
}

float media(float a, float b) {
    return (a + b) / 2;
}

int fatorial(int a) {
    if (a < 0)
        return -1;
    if (a == 0)
        return 1;
    return a * fatorial(a - 1);
}