// qualquer numero par depois de 4, ha dois numeros primos que somados dao ele

#include <stdio.h>

int primo(int x);

int main() {

    int par, i;
    scanf("%d", &par);

    if(par%2 != 0){
        printf("O número deve ser par\n");
        return 0;
    }

    for(i = 1; i <= par; i++){
        if(primo(i) == 1 && primo(par - i) == 1){
            printf("%d + %d = %d\n", i, par - i, par);
        }

    }

    return 0;
}

int primo(int x){
    
    if(x < 2)
        return 0;

    for(int divisor = 2; divisor < x; divisor++){
        if(x%divisor == 0){
            return 0;
        }
    }
    return 1;
}