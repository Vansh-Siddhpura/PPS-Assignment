// Write a C program to read structure elements from keyboard
#include<stdio.h>
struct Student{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct Student student;
    printf("Enter the name : ");
    fgets(student.name, sizeof(student.name),stdin);
    printf("Enter the age : ");
    scanf("%d",&student.age);
    printf("Enter the marks : ");
    scanf("%f",&student.marks);
    printf("-------------------Student info-------------------\n");
    printf("Name : %s",student.name);
    printf("Age : %d\n",student.age);
    printf("Marks : %.2f\n",student.marks);

    return 0;
}