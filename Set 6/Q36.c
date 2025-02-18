// Write a C program to sort given array in ascending order
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(int i = 0; i < size -1; i++){
        for (int j = 0; j < size -i -1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted array is : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}