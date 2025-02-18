// Write a C program to find a character from given string 
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    int postion = -1;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character to find : ");
    ch = getchar();
    for(int i = 0 ; str[i] != '\0'; i++){
        if(str[i] == ch){
            postion = i;
            break;
        }
    }
    if(postion == -1){
        printf("The character was not found the given string.");

    }else{
        printf("%c is found at %d postion of the given string.",ch,postion);
    }
    return 0;
}