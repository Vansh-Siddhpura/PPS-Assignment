//Write a C program to read and store the roll No and marks of 20 students using array 
#include<stdio.h>
int main(){
    int arr[20];
    for(int i = 0; i < 20; i++){
        printf("Enter the marks of  student %d : ", i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    for(int i = 0; i < 20 ; i++){
        printf("The marks of  the student %d is : ", i+1);
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}