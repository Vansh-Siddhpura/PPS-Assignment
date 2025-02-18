// Design a structure student_record to contain name, branch and total marks obtained.
// Develop a program to read data for 5 students in a class and print them 
#include<stdio.h>
struct student_record{
    char name[50];
    char branch[50];
    int marks;
};
int main(){
    struct student_record student[5];
    for(int i = 0; i < 5; i++){
        printf("\nEnter the student information for student %d\n",i+1);
        printf("Enter student name : ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        printf("Enter student's branch : ");
        fgets(student[i].branch, sizeof(student[i].branch), stdin);
        printf("Enter marks : ");
        scanf("%d",&student[i].marks);
        while(getchar() != '\n');
    }
    printf("\n--------------------------Student Information--------------------------\n");
    for(int i = 0; i <5; i++){
        printf("\nStudent : %d\n",i+1);
        printf("Name : %s",student[i].name);
        printf("Branch : %s",student[i].branch);
        printf("Marks : %d\n",student[i].marks);
    }
    return 0;
}