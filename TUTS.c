#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int age;
    int valid = 1;
    
    printf("Enter name: ");
    scanf("%99s", name);

    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i])) {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Enter characters, not numbers or special characters!\n");
        return 0;
    }

    printf("Enter age: ");

    if (scanf("%d", &age) != 1) {
        printf("Invalid input... Enter a number.\n");
        return 0;
    }

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);


    

    return 0;
}