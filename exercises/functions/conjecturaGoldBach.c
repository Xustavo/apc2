// qualquer numero par depois de 4, ha dois numeros primos que somados dao ele

#include <stdio.h>

void primo(x);

int main() {

    int par;
    scanf("%d", &par);

    primo(par);

    return 0;
}

void primo(int x){
    int primo1, primo2;
    for(int i = 1; i <= x; i++){
        for(int divisor = 2; divisor < i; divisor++){
            if(i%divisor == 0){
                
            }
            primo1 = i;
            primo2 = x - primo1;
            if(primo2 %divisor == 0){
                
            }
        }
        printf("%d %d\n", primo1, primo2);
    }
}