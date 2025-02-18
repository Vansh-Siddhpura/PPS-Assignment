#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks of the students : ");
    scanf("%d",&marks);
    if(marks >= 40){
        printf("Passed!!");
    }else{
        printf("Failed!!");
    }
    return 0;
}