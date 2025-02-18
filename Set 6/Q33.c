//Write a C program to find out which number is even or odd from list of 10 numbers using array
#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < 10; i++){
        if(arr[i]%2 == 0){
            printf("%d element : %d is even \n",i+1,arr[i]);
        }else{
            printf("%d element : %d is odd \n",i+1, arr[i]);
        }
    }
    return 0;
}