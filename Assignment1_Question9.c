#include<stdio.h>
int main(){
    int hour, min, sec;
    int hourtosec,mintosec,totalsec;

    printf("Enter time in hour:min:sec format");
    scanf("%d : %d : %d",&hour,&min,&sec);

    hourtosec=hour*60*60;
    mintosec=min*60;
    totalsec=hourtosec+mintosec+sec;
    printf("Total sec is %d",totalsec);
    

}