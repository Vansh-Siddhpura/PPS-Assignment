#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Addition of %d and %d is : %d\n",a,b,a+b);
    printf("Subtraction of %d from %d is : %d\n",b,a,a-b);
    printf("Multipication of %d and %d is : %d\n",a,b,a*b);
    printf("Division of %d and %d is : %d",a,b,a/b);


    return 0;
}
