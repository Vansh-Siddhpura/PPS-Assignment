// Write a C program to convert string into upper case
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    gets(str);
    strupr(str);
    printf("The string in upper case is : %s",str);
    return 0;
}