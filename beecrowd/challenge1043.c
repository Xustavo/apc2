#include <stdio.h>

int main() {

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    float area, perimetro;

    if((A + B > C) && (B + C > A) && (A + C > B)){
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        area = ((A + B) * C)/2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}