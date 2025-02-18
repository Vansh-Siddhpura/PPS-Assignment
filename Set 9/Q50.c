// Define a structure named “personal” that would contain person name, date of joining
// and salary. Use this structure to read this information of 5 people and print the same
// on screen 
#include<stdio.h>
struct personal{
    char name[50];
    char date[25];
    float salary;
};
int main(){
    struct personal person[5];
    for(int i = 0 ; i < 5; i++){
        printf("Enter the information of the person : %d\n",i+1);
        printf("Enter name : ");
        fgets(person[i].name, sizeof(person[i].name),stdin);
        printf("Enter the date of joining (dd/mm/yyyy) : ");
        fgets(person[i].date, sizeof(person[i].date), stdin);
        printf("Enter salary : ");
        scanf("%f",&person[i].salary);
        while (getchar() != '\n'); //clear intput buffer
    }
    printf("\n---------------------Personal Infomation---------------------\n");
    for(int i = 0 ; i < 5; i++){
        printf("Person %d\n",i+1);
        printf("Name : %s",person[i].name);
        printf("Date of joining : %s",person[i].date);
        printf("Salary : %.3f\n",person[i].salary);
        printf("\n------------------------------------------------------------\n");
    }
    return 0;
}