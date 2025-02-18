// Define structure called time_struct containing three members like integer hour,
// integer minute and integer second. Develop a program that would assign values to the
// individual number and display the time in the following format: 16:40:51 
#include<stdio.h>
struct time_struct{
    int hour;
    int min;
    int sec;
};
int main(){
    struct time_struct time;
    printf("Enter hours : ");
    scanf("%d",&time.hour);
    printf("Enter minutes : ");
    scanf("%d",&time.min);
    printf("Enter seconds : ");
    scanf("%d",&time.sec);
    printf("Time :- %02d:%02d:%02d",time.hour,time.min,time.sec);
    return 0;
}