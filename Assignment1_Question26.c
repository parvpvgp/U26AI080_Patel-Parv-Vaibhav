#include<stdio.h>
int main(){
    int sumodd=0,sumeven=0;
    int n;
    printf("Enter a number till where you want to find the sum : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+2){
        sumeven=sumeven+i; 
    }
    for (int i=1;i<=n;i=i+2){
        sumodd=sumodd+i;
    }
    printf("Sum of even numbers: %d\n", sumeven);
    printf("Sum of odd numbers: %d\n", sumodd);
    return 0;
}
