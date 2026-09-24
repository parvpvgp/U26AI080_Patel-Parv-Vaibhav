#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first Variable:");
    scanf("%d",&a);
    printf("Enter the second Variable:");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("a= %d\n",a);
    printf("b= %d\n",b);
}