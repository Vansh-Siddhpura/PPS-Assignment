#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    bool flag = true;
    if(n == 1){
        printf("1 is neither a prime number nor a composite number.");
        return 1;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    if(flag == true){
        printf("The given number is prime number.");
    }else{
        printf("The given number is composite number.");
    }
    return 0;
}