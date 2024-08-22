// qualquer numero par depois de 4, ha dois numeros primos que somados dao ele

#include <stdio.h>

int primo(int x);

int main() {

    int par, i, retorno1, retorno2;
    scanf("%d", &par);

    for(i = 1; i <= par; i++){
        retorno1 = primo(i);
        retorno2 = primo(par-i);
        if(retorno1 == 1 && retorno2 == 1){
            printf("%d e %d\n", i, par - i);
        }

    }

    return 0;
}

int primo(int x){
    for(int divisor = 2; divisor < x; divisor++){
        if(x%divisor == 0){
            return 0;
        }
    }
    return 1;
}