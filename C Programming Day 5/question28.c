#include<stdio.h>
int main() {
    int basic,hra,ta,da,gross;
    printf("INPUT YOUR BASIC SALARY:");
    scanf("%d", &basic);

    if(basic<=15000&&basic>=0){
        ta = 0.1*basic;
        da = 0.05*basic;
        gross = basic+ta+da;
        printf("The Gross Salary is: %d", gross);
    }
    else if(basic>=15000) {
        hra = 0.2*basic;
        ta = 0.1*basic;
        da = 0.05*basic;
        gross = basic+hra+ta+da;
        printf("The Gross Salary is: %d", gross);
    }
    else{
        printf("Invalid Salary");
    }
    return 0;
}