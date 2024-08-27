#include <stdio.h>

void fibonacci(int limit, int a, int b, int count);

int main() {

    int limit;
    scanf("%d", &limit);

    fibonacci(limit, 0, 1, 0);

    return 0;
}

void fibonacci(int limit, int a, int b, int count) {
    if(count < limit){
        printf("%d\n", a);
        fibonacci(limit, b, a+b, count+1);
    }
}