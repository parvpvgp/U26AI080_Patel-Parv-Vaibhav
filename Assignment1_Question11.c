#include<stdio.h>
int main(){
    double hour,sec,min;
    int totalsec;

    printf("Enter Total Second\n");
    scanf("%d",&totalsec);
    hour=totalsec/3600;
    min=(totalsec%3600)/60;
    sec=totalsec%60;
    printf("%Lf hour %Lf min %Lf sec",hour,min,sec);
}