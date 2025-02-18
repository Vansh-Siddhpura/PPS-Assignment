#include<stdio.h>
int main(){
    int person = 5, count = 0;
    float weight, height;
    for(int i = 0; i < 5; i++){
        printf("For %d person :=\n",i+1);
        printf("Enter the height in cm : ");
        scanf("%f",&height);
        printf("Enter the weight in kg : ");
        scanf("%f",&weight);
        if(height >= 170 && weight <= 50){
            count++;
        }
    }
    printf("The number of persons having height greater than 170 cm and weight less than 50 kg are : %d",count);
    return 0;
}