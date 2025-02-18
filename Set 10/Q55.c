// Write a C program to swap the two values using pointers 
#include<stdio.h>
int main(){
    int a,b;
    int *ptrA, *ptrB;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    ptrA = &a;
    ptrB = &b;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("The value of a is : %d\nThe value of b is : %d",a,b);
    return 0;
}