#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    char ch;
    printf("Enter A for addition, B for subtraction, C for multiplication, D for division:");
    scanf("%c",&ch);
    switch(ch){
        case 'A':
            printf("Addition of %d and %d is %d",a,b,a+b);
            break;
        case 'B':
            printf("Subtraction of %d and %d is %d",a,b,a-b);
            break;
        case 'C':
            printf("Multiplication of %d and %d is %d",a,b,a*b);
            break;
        case 'D':
            if(b==0){//try of if in switch case
                printf("Division by zero is not allowed");
            }
            else{
                printf("Division of %d and %d is %f",a,b,(float)a/b);
            }
            break;
        default:
            printf("Invalid input");
    }

}