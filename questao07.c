#include <stdio.h>

double potencia(double b, int exp){
    double result = 1.0;
    int i;

    if(exp >=0){
        for(i =0; i <exp; i++){
            result *= b;
        }
    }else{
        for(i =0; i > exp; i--){
            result /= b;
        }
    }

    return result;
}


int main () {
    double base;
    int expoente;
    double result;

    printf("Digite a base:");
    scanf("%lf", &base);

    printf("Digite o expoente:");
    scanf("%d", &expoente);

    result = potencia(base, expoente);

    printf("Potenciacao eh: %lf\n", result);

    return 0;
}