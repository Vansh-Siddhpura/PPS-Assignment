//imp
#include<stdio.h>
int main(){
    int students = 5, subject = 3,total,marks;
    float average;
    for(int i = 0; i < 5; i++){
       total = 0;
       printf("Enter the marks of %d student :=\n\n",i+1);

       for(int j = 0; j < 3; j++){
        printf("Enter the marks in %d subject: ",j+1);
        scanf("%d",&marks);
        total += marks;
       }
       average = (float)total/3;
       printf("\nTotal = %d and Average = %2.f\n\n",total,average);
    }
    return 0;
}