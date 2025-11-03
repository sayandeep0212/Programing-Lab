#include <string.h>
#include <stdio.h>

int main( ) {
    char a[]= "MADAM";
    int i,j=strlen(a);
    for(i=0;i<j;i++,j--){
        if (a[i]==a[j]){
            continue;
        }
        
    }
    if(i>j) {
        printf("The string is a palindrome");
    }
    else {
        printf("The string is not a palindrome");
    }


}