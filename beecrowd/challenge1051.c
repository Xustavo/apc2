#include <stdio.h>

int main(){

float salary, taxes = 0.0;

    scanf("%f", &salary);

    if (salary > 4500.0) {
        taxes += (salary - 4500.0) * 0.28;
        salary = 4500.0;
    }
    if (salary > 3000.0) {
        taxes += (salary - 3000.0) * 0.18;
        salary = 3000.0;
    }
    if (salary > 2000.0) {
        taxes += (salary - 2000.0) * 0.08;
    }
    
    if (taxes > 0.0) {
        printf("R$ %.2f\n", taxes);
    } else {
        printf("Isento\n");
    }

    return 0;
}