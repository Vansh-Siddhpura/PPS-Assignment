// Write a program to find maximum element from 1-Dimensional array
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        printf("Enter the %d element in the array : ", i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0 ; i < size; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    printf("The maximum element in the given array is : %d",max);
    return 0;
}