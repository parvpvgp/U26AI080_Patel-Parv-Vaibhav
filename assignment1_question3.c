#include<stdio.h>
int main(){
    int basicsal;
    double house_rent_allowance,daily_allowance,PF,grosssal;
    printf("Enter your Basic Salary : ");
    scanf("%d",&basicsal);
    house_rent_allowance=basicsal*0.20;
    daily_allowance=basicsal*0.50;
    PF=basicsal*0.11;
    grosssal=basicsal+house_rent_allowance+daily_allowance-PF;
    printf("Gross SAlary is %Lf",grosssal);
}