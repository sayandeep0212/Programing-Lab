#include<stdio.h>
#include<math.h>
int main() {
float p,n;
printf("Enter a Positive Number:");
scanf("%f", &p);
printf("Enter a Negative Number with Sign:");
scanf("%f", &n);
printf("The Floor an Ceil of Positive Number is %f & %f respectively \n", floor(p), ceil(n));
printf("The Floor an Ceil of Negative Number is %f & %f respectively \n", floor(n), ceil(p));
return 0;
}



