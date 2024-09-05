#include <stdio.h>

void addTen(int *p);

int main(){

    int value =7;
    addTen(&value);
    printf("%d\n", value);

    return 0;
}

void addTen(int *p){
    *p += 10;
}