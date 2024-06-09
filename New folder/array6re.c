#include <stdio.h>

int main() {
    char name[15];
    int i ; // Index of the last element in the array
    
    printf("Enter the name: ");
    scanf("%s", name); // Remove the & before name as it's an array

    printf("Reversed Name: ");
    for (i = 14; i >= 0; i--) {
        printf("%c", name[i]); // Print characters in reverse order
    }
    printf("\n");

    return 0;
}
