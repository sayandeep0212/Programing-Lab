#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter Your Integer Number:");
    scanf("%d",&a);
    b = a % 10;
    c = a - (10 *(a/10));
    printf("The last Digit Of the Integer Number is using modulus: %d \n", b);
    printf("The Last Digit Of The Integer Number is without using modulus : %d \n",c);
    return 0;

}