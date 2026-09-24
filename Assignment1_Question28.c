#include<stdio.h>
int main(){
    int num,originalNum, remainder, res= 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while(originalNum != 0)
    {
        remainder = originalNum % 10;
        res += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if(res==num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
