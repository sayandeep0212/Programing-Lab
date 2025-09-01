#include<stdio.h>
int main() {
    int y;
    printf("Enter The Year:");
    scanf("%d", &y);
    if(y%400 == 0) {
        printf("This is Leap Year");
    }
    else if(y%100==0) {
        printf("This is Leap Year");
    }
    else if (y%4 == 0) {
        printf("This is Leap Year");
    }
    else{
        printf("This is not a Leap Year");
    }
    return 0;
    
}