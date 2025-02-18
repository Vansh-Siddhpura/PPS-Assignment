#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int ans = 0;
    while(n != 0){
        int lastDigit = n%10;
        ans = (ans*10) + lastDigit;
        n /= 10;
    }
    printf("The reverse of the given number is : %d",ans);
    return 0;
}