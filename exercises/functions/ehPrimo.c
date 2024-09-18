#include <stdio.h>

void ehPrimo(x);

int main() {

    int x;
    scanf("%d", &x);

    ehPrimo(x);

    return 0;
}

void ehPrimo(x){
    if(x < 2)
        return;

    int divisor;
    for(divisor = 2; divisor < x; divisor++){
        if(x%divisor == 0){
            printf("Nao eh primo\n");
            return;
        }
    }
    printf("Eh primo\n");
}