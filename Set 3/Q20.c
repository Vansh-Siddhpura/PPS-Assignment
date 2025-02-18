//hard
#include<stdio.h>
int main(){
    int n,sum,fD,lD,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    lD = n%10;
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
    }
    fD = temp;
    sum = lD + fD;
    printf("The sum of first and last digit of the given number %d is : %d",n,sum);

    return 0;
}