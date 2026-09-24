#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of elemets (N):");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int second_max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    printf("The largest number is: %d\n", max);
    printf("The second largest number is: %d", second_max);
    return 0;
}