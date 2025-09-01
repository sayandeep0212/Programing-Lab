#include<stdio.h>

int main() {
    char x;
    printf("Enter The Letter :");
    scanf("%c",&x);

    if(x == 'a'|| x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        printf("This Letter is Vowel");
    }
    else if(x == 'A'|| x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        printf("This Letter is Vowel");
    }
    else {
        printf("This letter is Consonant");
    }
    return 0;
}