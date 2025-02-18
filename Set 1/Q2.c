#include<stdio.h>
int main(){
    int h,b,A;
    printf("Enter the height of the triangle : ");
    scanf("%d",&h);
    printf("Enter the base of the triangle : ");
    scanf("%d",&b);
    A = (h*b)/2;
    printf("The area of the triangle of given height %d and given base %d is : %d",h,b,A);
    return 0;
}