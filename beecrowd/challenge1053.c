#include <stdio.h>

int calculate_factorial(int a);

int main(){

    int n, retorno;
    scanf("%d", &n);

    retorno = calculate_factorial(n);

    printf("%d\n", retorno);

    return 0;
}

int calculate_factorial(int a){

    int i, multiplicacao = 1;

    for(i = 1; i<=a; i++){
        multiplicacao = multiplicacao * i;
    }

    return multiplicacao;
}