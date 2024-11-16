#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int total_animals = 0, rabbit_count = 0, rat_count = 0, frog_count = 0;
    
    for (int i = 0; i < N; i++) {
        int amount;
        char animal_type;
        
        scanf("%d %c", &amount, &animal_type);
        
        total_animals += amount;

        if (animal_type == 'C') {
            rabbit_count += amount;
        } else if (animal_type == 'R') {
            rat_count += amount;
        } else if (animal_type == 'S') {
            frog_count += amount;
        }
    }
    
    double rabbit_percentage = (double) rabbit_count / total_animals * 100;
    double rat_percentage = (double) rat_count / total_animals * 100;
    double frog_percentage = (double) frog_count / total_animals * 100;
    
    printf("Total: %d cobaias\n", total_animals);
    printf("Total de coelhos: %d\n", rabbit_count);
    printf("Total de ratos: %d\n", rat_count);
    printf("Total de sapos: %d\n", frog_count);
    printf("Percentual de coelhos: %.2f %%\n", rabbit_percentage);
    printf("Percentual de ratos: %.2f %%\n", rat_percentage);
    printf("Percentual de sapos: %.2f %%\n", frog_percentage);
    
    return 0;
}
