#include<stdio.h>
int main(){
    int i,p,r,n;
    printf("To calculate simple intrest please enter the follow details :-\n");
    printf("Enter the principle amount : ");
    scanf("%d",&p);
    printf("Enter the rate of interest : ");
    scanf("%d",&r);
    printf("Enter the time period in years : ");
    scanf("%d",&n);
    i = (p*n*r)/100;
    printf("The simple interest is : %d",i);
    return 0;
}