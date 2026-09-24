#include<stdio.h>
int main(){
    double hour,day,min;
    int rem1,rem2;

    printf("Earth takes a revolution of 31558150 seconds so converting it into day, hour and min\n");
    day=31558150/86400;
    rem1=31558150%86400;
    hour=rem1/3600;
    rem2=rem1%3600;
    min=rem2/60;
    printf("%Lf Days %Lf Hours %Lf min to complete the revolution",day,hour,min);
}