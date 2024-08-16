#include <stdio.h>

int main(){

    int n;//quantity of money
    scanf("%d", &n);

    if(n < 0 || n > 1000000){
    return 0;
    }

    int hundred = n/100.0;
    int fifty = (n%100)/50.0;
    int twenty = ((n%100)%50)/20;
    int ten = (((n%100)%50)%20)/10;
    int five = ((((n%100)%50)%20)%10)/5;
    int two = (((((n%100)%50)%20)%10)%5)/2;
    int one = ((((((n%100)%50)%20)%10)%5)%2);

    printf("%i\n", n);
    printf("%d nota(s) de R$ 100,00\n", hundred);
    printf("%d nota(s) de R$ 50,00\n", fifty);
    printf("%d nota(s) de R$ 20,00\n", twenty);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", five);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);

    return 0;
}