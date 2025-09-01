#include<stdio.h>
int main() {
    char t;
    printf("Call The Toss:");
    scanf("%c", &t);

    if( t=='h' || t=='H') {
        printf("This is Head");
    
    }
    else if( t=='t' || t=='T') {
        printf("This is Tail");
    }
    else {
        printf("Wrong Call");
    }
    return 0;
}