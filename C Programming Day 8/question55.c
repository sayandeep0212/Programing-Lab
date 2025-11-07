#include <stdio.h>

int myStrlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void myStrcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}

int myStrcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0; 
        }
        i++;
    }
    return str1[i] - str2[i]; 
}

void myStrcat(char *dest, const char *src) {
    int i = 0;
    while (dest[i] != '\0') i++;
    int j = 0;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main() {
    char str1[] = "Hello";
    int len = myStrlen(str1);
    printf("1. Length of \"%s\" is: %d\n\n", str1, len);

    char str2[] = "Programming";
    char destination[20];
    myStrcpy(destination, str2);
    printf("2. Original string: \"%s\"\n", str2);
    printf("   Copied string:  \"%s\"\n\n", destination);

    char s3[] = "Apple";
    char s4[] = "Apple";
    char s5[] = "Banana";

    int cmp1 = myStrcmp(s3, s4);
    int cmp2 = myStrcmp(s3, s5);

    printf("3. Comparing \"%s\" and \"%s\": ", s3, s4);
    if (cmp1 == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    printf("   Comparing \"%s\" and \"%s\": ", s3, s5);
    if (cmp2 == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    char x[50] = "Good";
    char y[] = "Morning";
    printf("\n4. Before concatenation: x = \"%s\", y = \"%s\"\n", x, y);
    myStrcat(x, y);
    printf("   After concatenation: x = \"%s\"\n", x);

    return 0;
}
