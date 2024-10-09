#include <stdio.h>

void whatIsIt(int a, int b);

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    whatIsIt(x, y);


    return 0;
}

void whatIsIt(int a, int b){

    if(a == 0 || b == 0){
        return;
    }

    if(a>0 && b>0){
        printf("primeiro\n");
    } else if(a<0 && b>0){
        printf("segundo\n");
    } else if(a<0 && b<0){
        printf("terceiro\n");
    }else {
        printf("quarto\n");
    }

    int c,d;
    scanf("%d %d", &c, &d);
    whatIsIt(c, d);
}