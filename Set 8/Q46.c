// Write a C program to find factorial of a number using recursion
#include<stdio.h>
int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The factorial of %d is : %d",n,fact(n));
    return 0;
}