#include<stdio.h>
int main(){
    int b,h;
    float area;

    printf("Enter the height of the triangle:");
    scanf("%d",&h);
    printf("Enter the base of the triangle:");
    scanf("%d",&b);
    area=0.5*b*h;
    printf("Area of the triangle is %f",area);
}