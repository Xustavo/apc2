#include <stdio.h>

int main() {

    float N1, N2, N3, N4;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    double average = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4)/10;

    printf("Media: %.1lf\n", average);
    if(average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(average < 5.0) {
        printf("Aluno reprovado.\n");
    } else if (average >= 5.0 && average <= 6.9) {
        printf("Aluno em exame.\n");
        float notaExame;
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        double newAverage = (average + notaExame)/2;
        if(newAverage >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", newAverage);
    }
    return 0;
}