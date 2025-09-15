#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        factorial *= i;
    }
    printf("Factorial is %d",factorial);
    return 0;
}