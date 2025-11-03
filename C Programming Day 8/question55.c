#include <stdio.h>

// Function to find the length of a string
int myStrlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy a string from src to dest
void myStrcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null terminate
}

// Function to compare two strings
int myStrcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0; // Strings are equal
        }
        i++;
    }
    return str1[i] - str2[i]; // Difference of first non-matching chars
}

int main() {
    // 1. Test myStrlen
    char str1[] = "Hello";
    int len = myStrlen(str1);
    printf("1. Length of \"%s\" is: %d\n\n", str1, len);

    // 2. Test myStrcpy
    char str2[] = "Programming";
    char destination[20];
    myStrcpy(destination, str2);
    printf("2. Original string: \"%s\"\n", str2);
    printf("   Copied string:  \"%s\"\n\n", destination);

    // 3. Test myStrcmp
    char s3[] = "Apple";
    char s4[] = "Apple";
    char s5[] = "Banana";

    int cmp1 = myStrcmp(s3, s4);
    int cmp2 = myStrcmp(s3, s5);

    printf("3. Comparing \"%s\" and \"%s\": ", s3, s4);
    if (cmp1 == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    printf("   Comparing \"%s\" and \"%s\": ", s3, s5);
    if (cmp2 == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
