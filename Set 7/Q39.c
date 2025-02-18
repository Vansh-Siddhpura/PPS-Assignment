// Write a C program to delete a character in given string
#include<stdio.h>
int main(){
    char str[100];
    char oldChar ;//, replace =' ';
    int i = 0,j = 0;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character that to be deleted : ");
    oldChar = getchar();
    // while(str[i] != '\0'){
    //     if(str[i] == oldChar){
    //         str[i] = replace;
    //     }
    //     i++;
    // }
    // str[j] = '\0';  
    while (str[i] != '\0') {
        if (str[i] != oldChar) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    printf("The new string is : %s",str);
    return 0;
}