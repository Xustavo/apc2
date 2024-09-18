#include <stdio.h>
#include <string.h>

typedef struct {
    char cut[21];
    int exp_date;
} Meat;

void sortMeat(Meat meats[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (meats[j].exp_date > meats[j + 1].exp_date) {
                Meat temp = meats[j];
                meats[j] = meats[j + 1];
                meats[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        if (n == 0) continue;

        Meat meats[n];

        for (int i = 0; i < n; i++) {
            scanf("%s %d", meats[i].cut, &meats[i].exp_date);
        }

        sortMeat(meats, n);

        for (int i = 0; i < n; i++) {
            printf("%s", meats[i].cut);
            if (i < n - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
