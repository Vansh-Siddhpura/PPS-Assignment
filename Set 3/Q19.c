#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("Enter the number : ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    for(int i = 0; i < n ; i++){
        printf("%d\n",a);
        c = a + b;
        a = b;
        b = c;

    }
    return 0;
}