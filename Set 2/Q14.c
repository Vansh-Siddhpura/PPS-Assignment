#include <stdio.h>

int main() {
    float basic, da, hra, ma = 300, pf, gross, net;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    da = 0.10 * basic;
    hra = 0.075 * basic;
    pf = 0.125 * basic;

    
    gross = basic + da + hra + ma;
    net = gross - pf;
    printf("Basic Salary: %.2f\n", basic);
    printf("DA: %f\n", da);
    printf("HRA: %f\n", hra);
    printf("MA: %f\n", ma);
    printf("Gross Salary: %f\n", gross);
    printf("PF: %f\n", pf);
    printf("Net Salary: %f\n", net);

    return 0;
}
