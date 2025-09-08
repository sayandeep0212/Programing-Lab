#include<stdio.h>
int main() {
    float a,b,x;
    char o;
    printf("ENTER YOUR FIRST NUMBER:");
    scanf("%f", &a);
    printf("ENTER YOUR SECOND NUMBER:");
    scanf("%f", &b);
    printf("Choose Your Operand Like +,-,*,/:");
    scanf(" %c", &o);

    switch(o) {
        case'+': x=a+b;
            break;
        case'-': x=a-b;
            break;
        case'*': x=a*b;
            break;
        case'/': x=a/b;
            break;
        default:
            printf("Wrong Input");
    }
    printf("YOUR FINAL RESULT IS: %f", x);
    return 0;
}