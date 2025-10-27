#include <stdio.h>

int main() {
    int num,rev=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }       
    printf("Reversed number of %d is: %d\n", temp, rev);
    if (temp == rev) {  
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}