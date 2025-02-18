#include<stdio.h>
int main(){
    int n;
    printf("How many numbers you want?\n");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invaild input.");
        return -1;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    float avg = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    avg = (float)sum/n;
    printf("The sum and the average of the given %d numbers is :-\nSum = %d and Average = %.2f",n,sum,avg);
    return 0;
}