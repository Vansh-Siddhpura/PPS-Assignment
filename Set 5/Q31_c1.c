#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    char letter = 'A';
    for(int i = n; i >= 1; i--){
        for(int j = 1 ; j <= i; j++){
            printf("%c ",letter);
        }
        letter++;
        printf("\n");
    }
    return 0;
}