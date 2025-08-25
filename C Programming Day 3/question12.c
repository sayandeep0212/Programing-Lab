#include<stdio.h>
#include<math.h>
int main() {
    float p,r,n,t;
    printf("Enter Your Principal Amount:");
    scanf("%f", &p);
    printf("Enter Your Interest Rate:");
    scanf("%f", &r);
    printf("Enter Your Time Period:");
    scanf("%f", &t);
    n = p*pow((1 + r /100), t);
    printf("Your CI anually is: %f", n - p);
    return 0;
}