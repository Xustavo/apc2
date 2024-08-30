#include <stdio.h>
#include <string.h>

int main() {

    char class1[20], class2[20], class3[20];
    scanf("%s %s %s", class1, class2, class3);

    if(strcmp(class1, "vertebrado") == 0){
        if(strcmp(class2, "ave") == 0){
            if(strcmp(class3,"carnivoro" ) == 0){
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        }else {
            if(strcmp(class3, "onivoro") == 0){
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if(strcmp(class2, "inseto") == 0){
            if(strcmp(class3, "hematofago") == 0){
                printf("pulga\n");
            }else {
                printf("lagarta\n");
            }
        }else {
            if(strcmp(class3, "hematofago") == 0){
                printf("sanguessuga\n");
            }else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}