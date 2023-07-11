#include <stdio.h>

int calcularSoma(int num1, int num2)
{
    int soma = num1 + num2;
    return soma;
}

int main()
{
    int a, b;

    printf("Digiter o primeiro valor:");
    scanf("%d", &a);
    printf("Digite o segundo valor:");
    scanf("%d", &b);

    int resultado = calcularSoma(a, b);
    printf("A soma de %d+%d = %d", a, b, resultado);

    return 0;
}