#include <stdio.h>
#include "minhaLib.h"

int main() {
    int n;
    float a, b;

    printf("Digite um numero para Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci: %d\n", fibonacci(n));

    printf("\nDigite um numero para verificar se e par: ");
    scanf("%d", &n);
    printf("Resultado: %d\n", ehpar(n));

    printf("\nDigite um numero para verificar se e positivo: ");
    scanf("%d", &n);
    printf("Resultado: %d\n", ehpositivo(n));

    printf("\nDigite o expoente: ");
    scanf("%d", &n);
    printf("Resultado: %d\n", elevado(n));

    printf("\nDigite duas notas: ");
    scanf("%f %f", &a, &b);
    printf("Media: %.2f\n", media(a, b));

    printf("\nDigite um numero para fatorial: ");
    scanf("%d", &n);
    printf("Fatorial: %d\n", fatorial(n));

    return 0;
}