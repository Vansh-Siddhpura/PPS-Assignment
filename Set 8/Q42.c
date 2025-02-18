// Write a C program that defines a function to add first n numbers
#include<stdio.h>
int add(int n){
    int sum = (n*n + n)/2;
    return sum;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of %d numbers is %d",n,add(n));
    return 0;
}