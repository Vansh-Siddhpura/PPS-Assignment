// Write a C program for sorting using pointer
#include<stdio.h>
void bubbleSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main(){
    int arr[] = {1,5,77,54,34,23,654,34,654,66,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array : ");
    for(int i = 0; i < n ; i++){
        printf("%d ",arr[i]);
    }
    bubbleSort(arr, n);

    printf("\nSorted array : ");
    for(int i = 0 ; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}