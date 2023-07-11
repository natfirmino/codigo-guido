#include <stdio.h>

double calculoValorTotal(int quantidade, char tipo)
{
    double valorUnitario;
    double valorTotal;

    if (quantidade >= 10000)
    {
        valorUnitario = 0.15;
        valorTotal = quantidade * valorUnitario * 0.9;
    }
    else if (tipo == 'b')
    {
        if (quantidade > 1000)
        {
            valorUnitario = 0.20;
        }
        else if (quantidade >= 800 && quantidade <= 999)
        {
            valorUnitario = 0.40;
        }
        else if (quantidade >= 300 && quantidade <= 799)
        {
            valorUnitario = 0.40;
        }
        else if (quantidade >= 100 && quantidade <= 299)
        {
            valorUnitario = 0.80;
        }
        else if (quantidade >= 1 && quantidade <= 99)
        {
            valorUnitario = 1.00;
        }
    }
    else if (tipo == 'v')
    {
        if (quantidade > 1000)
        {
            valorUnitario = 0.30;
        }
        else if (quantidade >= 800 && quantidade <= 999)
        {
            valorUnitario = 0.50;
        }
        else if (quantidade >= 300 && quantidade <= 799)
        {
            valorUnitario = 0.50;
        }
        else if (quantidade >= 100 && quantidade <= 299)
        {
            valorUnitario = 0.90;
        }
        else if (quantidade >= 1 && quantidade <= 99)
        {
            valorUnitario = 1.20;
        }
    }
    else
    {
        printf("Tipo de ovo invalido.\n");
        return -1; 
    }

    valorTotal = quantidade * valorUnitario;

    return valorTotal;
}

int main()
{
    int quantidade;
    char tipo;
    double valorTotal;

    printf("Digite a quantidade de ovos: ");
    scanf("%d", &quantidade);

    printf("Digite o tipo de ovo (b para branco, v para vermelho): ");
    scanf(" %c", &tipo);

    valorTotal = calculoValorTotal(quantidade, tipo);

    if (valorTotal != -1)
    {
        printf("Valor total da compra: R$ %.2lf\n", valorTotal);
    }

    return 0;
}
