// Write C functions which return 1 if number is prime otherwise returns 0 
#include<stdio.h>
#include<math.h>

int isPrime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2 ; i < sqrt(n); i++){
        if(n%i == 0){
            return 0;
        } 
        
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(isPrime(n) == 1){
        printf("%d is a prime number.",n);
    }else{
        printf("%d is not a prime number",n);
    }
    return 0;
}