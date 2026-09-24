#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of elements (N):");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The largest number is: %d\n", max);
    printf("The smallest number is: %d", min);
    return 0;
}