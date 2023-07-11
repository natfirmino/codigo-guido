#include <stdio.h>

void parImpar(int num)
{
    if (num % 2 == 0)
    {
        printf("%d eh par\n", num);
    }
    else
    {
        printf("%d eh um numero impar", num);
    }
}

int main()
{
    int a;

    printf("Digite um numero inteiro:");
    scanf("%d", &a);

    parImpar(a);

    return 0;
}