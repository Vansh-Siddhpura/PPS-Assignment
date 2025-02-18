// Write a C function to interchange the values of two variables, say x and y
#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
int main(){
    int x,y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("The value of x is : %d\n",x);    
    printf("The value of y is : %d\n",y);    
    return 0;
}
