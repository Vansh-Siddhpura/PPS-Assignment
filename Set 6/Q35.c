// Write a C program to calculate the average, geometric and harmonic mean of n elements in an array 
#include<stdio.h>
#include<math.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        printf("Enter the %d element in the array : ", i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int  i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("The average of the given elements of the array is : %.2lf\n",(double)sum/size);
    double multi = 1.0,ans;
    for(int i = 0; i < size; i++){
        multi *= arr[i];
    }
    ans = pow(multi,1.0/size);
    printf("The geometeric mean of the given elements of the array is : %.2lf\n", ans);

    double harmonic, harSum = 0;
    for(int i = 0 ; i < size ; i++){
        harSum += 1.0/arr[i];
    }
    harmonic = size/harSum;
    printf("The harmonic sum of the given element of the array is : %.2lf\n", harmonic);


    return 0;
}