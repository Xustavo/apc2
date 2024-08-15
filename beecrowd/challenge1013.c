#include <stdio.h>

int main (){

    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    int maiorAB = ((a+b+abs(a-b)))/2;
    int maior = ((maiorAB + c + abs(maiorAB-c)))/2;

    printf("%d eh o maior\n", maior);

    return 0;
}