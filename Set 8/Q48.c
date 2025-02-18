// Write a C function in which string will be passed as an argument and convert all
// lowercase character into their uppercase equivalents 
#include<stdio.h>
#include<string.h>
// #include <ctype.h>

// void upperCase(char str[]) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         str[i] = toupper(str[i]);
//     }
// }
void upperCase(char str[]){
    strupr(str);
}
int main(){
    char str[100];
    printf("Enter the string : ");
    gets(str);
    upperCase(str);
    printf("The string in upper case is : %s",str);
    return 0;

}