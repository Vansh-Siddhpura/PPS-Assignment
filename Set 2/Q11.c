#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("It is a capital letter.");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("It is a small letter.");
    }else if(ch >= '0' && ch <= '9'){
        printf("It is a digit.");
    }else{
        printf("It is a special character.");
    }
    return 0;
}