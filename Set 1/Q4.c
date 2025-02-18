#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    temp = b;
    b = a;
    a = temp;
    printf("After interchanging , A is %d and B is %d",a,b);
    return 0;
}