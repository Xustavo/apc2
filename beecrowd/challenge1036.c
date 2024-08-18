#include <stdio.h>
#include <math.h>

int main() {

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    //delta calculus
    float delta = pow(B, 2) - 4 * A * C;

    //bhaskara formula
    float R1 = ((-B) + sqrt(delta))/ (2 * A);
    float R2 = ((-B) - sqrt(delta))/ (2 * A);

    if(A <= 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }

    return 0;
}