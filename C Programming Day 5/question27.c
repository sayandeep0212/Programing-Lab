#include<stdio.h>
int main() {
    char x;
    printf("ENTER YOUR ALPHABET:");
    scanf("%c", &x);

    switch(x) {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("THIS ALPHABET IS VOWEL");
        break;
        default:
        printf("THIS IS CONSONANT");
    }
    return 0;
}