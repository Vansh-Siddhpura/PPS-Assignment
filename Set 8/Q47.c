// Write a C program which demonstrates the use of global and static variable
#include<stdio.h>
int globalVar = 10;
void fun(){
    static int staticVar = 20;
    globalVar++;
    staticVar++;
    printf("Value of Global Var is = %d\nValue of static var is = %d\n\n",globalVar,staticVar);
}
int main(){
    for(int i = 0; i < 10; i++){
        fun();
    }
    return 0;
}