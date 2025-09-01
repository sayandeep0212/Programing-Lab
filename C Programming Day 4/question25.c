#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("Enter Third Number:");
    scanf("%d", &c);

    if(a >= b) {
        if(a >= c)
        printf("%d is greatest \n",a);
    
    else
    printf("%d is greatest \n",c);
    }
else {
    if(b >= c)
    printf("%d is greatest \n",b);
    else
    printf("%d is greatest \n",c);
}
return 0;
}