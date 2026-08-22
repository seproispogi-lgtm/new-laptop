#include <stdio.h>
#include <stdbool.h>

int main(){

    while (true) {
        int num1, num2;
        int choice;
        char pili[] = "Calculator\n"
                        "1. Addition\n"
                        "2. Subtraction\n"
                        "3. Multiplication\n"
                        "4. Division\n"
                        "5. Square root\n"
                        "6. Square\n"
                        "7. Exponential\n"
                        "8. Exit\n";
        
        printf(pili);
        printf("Choose your operation: ");
        scanf("%d", &choice);

     return 0;
    }
    

}