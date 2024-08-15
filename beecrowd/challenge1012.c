#include <stdio.h>
 
int main() {
    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    double triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;
    triangulo = (A * C)/2;
    circulo = pi * C * C;
    trapezio = ((A + B)/2) * C;
    quadrado = B * B;
    retangulo = A * B;
    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);
    return 0;
}