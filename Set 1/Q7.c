#include<stdio.h>
int main(){
    float d,u,t,a;
    printf("Enter velocity in standard units : ");
    scanf("%f",&u);
    printf("Enter accelaration in standard units : ");
    scanf("%f",&a);
    printf("Enter time in standard units : ");
    scanf("%f",&t);
    d = (u*t) + (a*t*t)/2;//worng formula in que
    
    printf("Therefore the distance travelled is : %f m",d);
    return 0;
}