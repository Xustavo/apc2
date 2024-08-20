#include <stdio.h>

int main() {

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int maior, menor, meio;
    
    //quem eh o maior
    if(A > B && A > C) {
        maior = A;
    } else if(B > A && B > C) {
        maior = B;
    } else {
        maior = C;
    }

    //quem eh o menor
    if(A < B && A < C) {
        menor = A;
    } else if(B < A && B < C) {
        menor = B;
    } else {
        menor = C;
    }

    //quem eh o do meio
    if((A > B && A < C) || (A < B && A > C)) {
        meio = A;
    } else if((B > A && B < C) || (B < A && B > C)) {
        meio = B;
    } else {
        meio = C;
    }

    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

    return 0;
}