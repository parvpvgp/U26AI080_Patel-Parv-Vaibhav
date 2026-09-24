#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",a,i,a*i);
        
        
    }
    for(int i=1;i<=10;i++){
        
        printf("%d * %d = %d\n",b,i,b*i);
    }
    return 0;

}