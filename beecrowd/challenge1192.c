#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    getchar();

    char num1, letter, num2;

    for(int i=0; i<n; i++){
        scanf("%c %c %c",&num1, &letter, &num2);
        getchar();

        //converting char into integer
        int value1 = num1 - '0';
        int value2 = num2 - '0';

        if(num1 == num2){
            printf("%d\n", value1 * value2);
            continue;
        }

        if(letter >= 'A' && letter <= 'Z'){
            printf("%d\n", value2 - value1);
        }else{
            printf("%d\n", value2 + value1);
        }
    }

    return 0;
}