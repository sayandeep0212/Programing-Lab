#include <stdio.h>

int main() {
    int size, b;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int a[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number to be searched: ");
    scanf("%d", &b);
    
    int found = 0;
    for(int i = 0; i < size; i++) {
        if(a[i] == b) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Element not found in the array\n");
    }
    
    return 0;
}   