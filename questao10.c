#include <stdio.h> 

void numerosImpares(int num){
    printf("Numeros impares menos %d:", num);
    for(int i=1; i< num; i+=2){
        printf("%d", i);
    }
}

int main () {
    int a; 

    printf("Insira um numero:");
    scanf("%d\n", &a);

    numerosImpares(a);


    return 0;    
}