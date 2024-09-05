#include <stdio.h>

void calculate(int a, int *b);

int main(){

    int x = 3, y = 4;
    calculate(x, &y);
    printf("%d %d\n", x , y);

    return 0;
}

void calculate(int a, int *b){
    a += 5;
    *b *= 2;
}