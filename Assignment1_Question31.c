#include<stdio.h>
int main(){
    int num,reverse,remainder, original;
    float sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    original=num;
    reverse=0;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
        sum+=remainder;

    }
    printf("The sum of digits is : %f",sum);
}
