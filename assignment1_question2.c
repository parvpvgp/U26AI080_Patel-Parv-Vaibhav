#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,max,base;
    double per,total;
    printf("Enter Maximum Marks:");
    scanf("%d",&max);
    printf("Enter the first marks:");
    scanf("%d",&m1);
    printf("Enter the Second marks:");
    scanf("%d",&m2);
    printf("Enter the Third marks :");
    scanf("%d",&m3);
    printf("Enter the Fourth marks:");
    scanf("%d",&m4);
    printf("Enter the Fifth marks:");
    scanf("%d",&m5);
    base=max;
    total=m1+m2+m3+m4+m5;
    per=(total/base)*100;
    printf("Total is %Lf\n",total);
    printf("Percentage is %Lf\n",per);
}