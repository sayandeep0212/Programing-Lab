#include<stdio.h>
int main () {
    float h,w;
    printf("Enter Your Rectangular's Height:");
    scanf("%f", &h);
    printf("Enter Your Rectangular's Width:");
    scanf("%f", &w);
    printf("The Area Of The Rectangular Is: %f \n",h * w);
    printf("The Perimeter of The Rectangular Is: %f", 2 * (h + w));
    return 0;
}