#include <stdio.h>

int main() {

    int X, Y;
    float price;
    scanf("%d %d", &X, &Y);

    switch (X) {
        case 1: price = Y * 4.0;
                printf("Total: R$ %.2f\n", price);
                break;
        case 2: price = Y * 4.5;
                printf("Total: R$ %.2f\n", price);
                break;
        case 3: price = Y * 5.0;
                printf("Total: R$ %.2f\n", price);
                break;
        case 4: price = Y * 2.0;
                printf("Total: R$ %.2f\n", price);
                break;
        case 5: price = Y * 1.5;
                printf("Total: R$ %.2f\n", price);
                break;
        default: break;
    }

    return 0;
}