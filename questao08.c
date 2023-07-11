#include <stdio.h>

double calcularMedia(double nota1, double nota2, double nota3) {
    double media = (nota1 + nota2 + nota3) / 3.0;
    return media;
}

int main() {
    double nota1, nota2, nota3;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    media = calcularMedia(nota1, nota2, nota3);

    printf("A media e: %.2lf\n", media);

    return 0;
}
























