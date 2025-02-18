#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0 ; i < 10; i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Maximum element is %d\nMinium element is %d",max,min);
    return 0;
}