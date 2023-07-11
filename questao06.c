#include <stdio.h>

int main()
{
    int qtd;

    printf("Digite a quantidade de vezes:");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++)
    {
        printf("FUCAPI\n");
    }

    return 0;
}