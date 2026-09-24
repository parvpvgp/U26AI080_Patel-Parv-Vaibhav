#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    float y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    switch(n){
        case 1:
        y=1+x;
        printf("The value of y is %.2f",y);
        break;
        case 2:
        y=1+x/n;
        printf("The value of y is %.2f",y);
        break;
        case 3:
        y=1+pow(n,x);
        printf("The value of y is %.2f",y);
        break;
        default:
        y=1+n*x;
        printf("The value of y is %.2f",y);
        break;
    }

}