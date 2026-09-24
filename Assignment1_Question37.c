#include<stdio.h>
int main(){
    int n;
    printf("Enter the number till where you want to find");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+2){
        printf("%d\t",i);
    }
}