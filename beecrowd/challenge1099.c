#include <stdio.h>

int main() {

    int n,i,x,y;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);

        int soma = 0;
        int j;

        if(x > y){
            for(j = y + 1; j<x; j++){
                if(j%2 != 0){
                    soma += j;
                }
            }
        }else if(x < y){
            for(j = x + 1; j<y; j++){
                if(j%2 != 0){
                    soma += j;
                }
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}