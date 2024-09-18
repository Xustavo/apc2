#include <stdio.h>

void ehPerfeito(int i);

int main(){

    int i, limit = 1000;

    for(i = 1; i < limit; i++){
        ehPerfeito(i);
    }

    return 0;
}

void ehPerfeito(int i) {

    int divisor, soma = 0;
    for(divisor = 1; divisor < i; divisor++){
        if(i%divisor == 0){
            soma += divisor;
        }
    }

    if(soma == i){
        printf("%d eh perfeito\n", i);
    }

}