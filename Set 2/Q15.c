#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int lastDigit = n%10;
    if(lastDigit%2 == 0){
        printf("The last digit of the given number is even");
    }else{
        
        printf("The last digit of the given number is odd");
    }
    return 0;
}