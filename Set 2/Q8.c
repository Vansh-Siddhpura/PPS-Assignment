#include<stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a > 0){
        printf("The given number is positive.");
    }else if(a < 0){
        printf("The given number is negative.");
    } else{
        printf("The given number is zero");
    }
    return 0;
}