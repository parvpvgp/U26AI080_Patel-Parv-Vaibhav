#include<stdio.h>
int main(){
    int M,P,C,E;
    float CM;
    printf("Enter mathematics marks out of 200:\n");
    scanf("%d",&M);
    printf("Enter physics marks out of 200:\n");
    scanf("%d",&P);
    printf("Enter Chemistry marks out of 200:\n");
    scanf("%d",&C);
    printf("Enter English marks out of 100:\n");
    scanf("%d",&E);
    CM=(M/2)+(P/2)+(C/2)+E;
    printf("Cutoff Marks is %f",CM);

}