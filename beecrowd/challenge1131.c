#include <stdio.h>

void nemAi(int goalI, int goalG, int wI, int wG, int draw, int qM);

int main(){

    int goalsInter, goalsGremio, winsInter = 0, winsGremio = 0, draw = 0, quantityMatches=0;
    scanf("%d %d", &goalsInter, &goalsGremio);

    nemAi(goalsInter, goalsGremio, winsInter, winsGremio, draw, quantityMatches);

    return 0;
}

void nemAi(int goalI, int goalG, int wI, int wG, int draw, int qM){
    qM++;

    if(goalI > goalG){
        wI++;
    } else if(goalG > goalI){
        wG++;
    } else {
        draw++;
    }

    int choice;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &choice);

    if(choice == 1){
        int goalI2, goalG2;
        scanf("%d %d", &goalI2, &goalG2);
        nemAi(goalI2, goalG2, wI, wG, draw, qM);
    } else{
        printf("%d grenais\n", qM);
        printf("Inter:%d\n", wI);
        printf("Gremio:%d\n", wG);
        printf("Empates:%d\n", draw);
        if(wG>wI){
            printf("Gremio venceu mais\n");
        }else if(wI>wG){
            printf("Inter venceu mais\n");
        }else{
            printf("Não houve vencedor\n");
        }
    }
}

