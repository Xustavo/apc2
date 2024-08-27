// 2 numeros sao primos entre si quando o maximo divisor comum entre os 2 for 1

#include <stdio.h>

int algoritmoEuclides (int x, int y);

int main() {

    int x, y, retorno;
    scanf("%d %d", &x, &y);

    retorno = algoritmoEuclides (x, y);

    if(retorno == 1){
        printf("%d e %d são primos entre si\n", x, y);
    } else {
        printf("%d e %d não são primos entre si\n", x, y);
    }
    return 0;
}

int algoritmoEuclides (int x, int y) {

    int temp;

    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;

        if(x == 1){
            return 1;
        }
    }
    return 0;
}