// Write a C program to reverse string 
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int st = 0 , end;
    printf("Enter the string : ");
    gets(str);
    end = strlen(str) - 1;

    while(st < end){
        char temp = str[st];
        str[st] = str[end];
        str[end] = temp;
        st++;
        end--;

    }
    printf("The reverse string is : %s",str);
    return 0;
}