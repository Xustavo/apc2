#include <stdio.h>
#define MAX_SIZE 100000

int main() {

    int n; //number of values to be read
    scanf("%d", &n);

    if(n > 10000) return 0;

    int x[MAX_SIZE];

    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        if (x[i] == 0) {
            printf("NULL\n");
        } else if (x[i] % 2 == 0) {
            if (x[i] > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else {
            if (x[i] > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}