// Write a C program to print the address of character and the character of string using
// pointer 
#include<stdio.h>
int main(){
    char string[] = "Yo what's up";
    char *ptr = string;
    while(*ptr != '\0'){
        printf("Character : %c its address is : %p\n",*ptr,(void*)ptr);
        ptr++;
    }
    return 0;
}