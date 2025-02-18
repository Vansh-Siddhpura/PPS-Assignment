//Write a C program to replace a character in given string 
#include<stdio.h>
int main(){
    char str[100];
    char oldChar, newChar;
    int i = 0;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character to be replaced : ");
    scanf("%c",&oldChar);
    getchar();
    printf("Enter the new character : ");
    scanf("%c", &newChar);

    while(str[i] != '\0'){
        if(str[i] == oldChar){
            str[i] = newChar;
        }
        i++;
    }
    printf("The new string is :-\n%s",str);
    return 0;
}