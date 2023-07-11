#include <stdio.h>

int verifNumero(int n)
{
    if (n > 0)
    {
        printf("Positivo", n);
    }
    else if (n < 0)
    {
        printf("Negativo", n);
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int a;

    printf("Digite um numero:");
    scanf("%d", &a);

    verifNumero(a);

    return 0;
}