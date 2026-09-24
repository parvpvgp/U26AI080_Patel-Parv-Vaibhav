#include<stdio.h>
int main(){
    int num,reverse,remainder, original;
    printf("Enter an integer: ");
    scanf("%d",&num);
    original=num;
    reverse=0;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;


    }
    if(reverse==original)
    printf("It is a palindrome number");
    else 
    printf("It is not a palindrome number");
}