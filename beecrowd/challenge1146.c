#include <stdio.h>

int main(){

    while(1){
        int x;
        scanf("%d", &x);

        if(x == 0){
            return 0;
        }

        int i;

        for(i=1;i<=x;i++){
            printf("%d", i);
            if(i!=x){
                printf(" ");
            }
            if(i==x){
                printf("\n");
            }
        }
    }

    return 0;
}