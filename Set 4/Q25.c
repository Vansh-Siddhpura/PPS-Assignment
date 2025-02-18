//25 Write a C program to evaluate the series 1^2+2^2+3^2+……+n^2 
#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){//int sum = (n * (n + 1) * (2 * n + 1)) / 6; formula
        sum += i*i;

    }
    printf("Ans = %d",sum);

}