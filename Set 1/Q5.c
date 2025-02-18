#include<stdio.h>
int main(){
    float km;
    printf("Enter the distance in Kilometer : ");
    scanf("%f",&km);
    printf("This distance in meter is : %f\n",km*1000);
    printf("This distance in feet is : %f\n",km*3280.84);
    printf("This distance in inch is : %f\n",km*39370.1);
    printf("This distance in centimeter is : %f\n",km*100000);
    return 0;
}