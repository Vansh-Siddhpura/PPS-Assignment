// Write a C program to access array using pointer 
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int lenght = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < lenght; i++){
        printf("Element %d : %d\n",i,*(ptr + i));
    }
    return 0;
}