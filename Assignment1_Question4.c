#include<stdio.h>
int main(){
    float temp;
    double cel;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&temp);
    cel=(temp-32)/1.8;
    printf("The temperature in fahreheit is %f\n",temp);
    printf("The temperature in Celcius is %Lf\n",cel);

}