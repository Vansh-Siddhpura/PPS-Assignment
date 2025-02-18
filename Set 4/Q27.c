//Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    float ans = 0;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        ans += 1.0/(fact *= i);
    }
    printf("The ans is : %f",ans);
    return 0;
}