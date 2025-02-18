#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperture in centigrade : ");
    scanf("%f",&c);
    f = 1.8*c + 32;
    printf("The temperture in Fahrenheit is : %f ",f);
    return 0;
}