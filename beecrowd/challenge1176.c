#include <stdio.h>

void fibonacci(int position, long long a, long long b, int count);

int main(){

    int n, position;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &position);
        fibonacci(position, 0, 1, 0);
    }

    return 0;
}

void fibonacci(int position, long long a, long long b, int count){
    if(count == position){
        printf("Fib(%d) = %lld\n",position, a);
        return;
    }
    fibonacci(position, b, a+b, count+1);
}