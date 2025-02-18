#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);
    if (a >= b) {
        if (a >= c) {
            printf("%d is the largest", a);
        } else {
            printf("%d is the largest", c);
        }
    } else {
        if (b >= c) {
            printf("%d is the largest", b);
        } else {
            printf("%d is the largest", c);
        }
    }
    return 0;
}