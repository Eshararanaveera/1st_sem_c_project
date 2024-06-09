#include <stdio.h>

int main() {
    char name[20];
    
    int i, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int size = sizeof(name) / sizeof(name[0]);
    
    printf("Enter name: ");
    scanf("%s", name);
    
    for (i = 0; i < size; ++i) {
        if (name[i] == 'a') {
            s1 += 1;
        } else if (name[i] == 'e') {
            s2 += 1;
        } else if (name[i] == 'i') {
            s3 += 1;
        } else if (name[i] == 'o') {
            s4 += 1;
        } else if (name[i] == 'u') {
            s5 += 1;
        }
    }
    
    printf("Vowels\tCount\n");
    printf("a\t%d\n", s1);
    printf("e\t%d\n", s2);
    printf("i\t%d\n", s3);
    printf("o\t%d\n", s4);
    printf("u\t%d\n", s5);

    return 0;
}
