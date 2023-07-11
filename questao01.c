#include <stdio.h>

void calculoTabuada(int numero)
{
    for (int i = 1; i <= 10; i++)
    {
        int resul = numero * i;
        printf("%d x %d = %d\n", numero, i, resul);
    }
}

int main()
{
    int numero;
    printf("Digite o numero da tabuada:");
    scanf("%d", &numero);

    printf("Tabuada do número %d:\n", numero);
    calculoTabuada(numero);

    return 0;
}