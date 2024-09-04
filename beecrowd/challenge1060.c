#include <stdio.h>

int main(){

    float number[6];
    int counter = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &number[i]);
        if(number[i] > 0){
            counter++;
        }
    }

    printf("%d valores positivos\n", counter);

    return 0;
}