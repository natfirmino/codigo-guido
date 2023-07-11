#include <stdio.h>

int main()
{
    int count= 1;
    int valor, maior, menor, soma = 0;
    float media;

    printf("Digite 8 valores inteiros:\n");

    while (count <= 8)
    {
        printf("Valor %d: ", count);
        scanf("%d", &valor);

        if (count == 1)
        {
            maior = valor;
            menor = valor;
        }
        else
        {
            if (valor > maior)
            {
                maior = valor;
            }
            if (valor < menor)
            {
                menor = valor;
            }
        }

        soma += valor;
        count++;
    }

    media = (float)soma / 8;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media dos numeros lidos: %.2f\n", media);

    return 0;
}