#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){

    while (true) {

        float num, num1, num2;
        int choice;
        char pili[] = "Calculator\n"
                        "1. Addition\n"
                        "2. Subtraction\n"
                        "3. Multiplication\n"
                        "4. Division\n"
                        "5. Exponential\n"
                        "6. Square root\n"
                        "7. Exit\n";
        
        printf(pili);
        printf("Choose your operation: ");
        scanf("%d", &choice);

        if(choice == 7){
            printf("Comeback Again!");
            break; 
        }

        else if(choice == 6){
            printf("Enter your Number: ");
            scanf("%.2f",num);
            prinf("%.2f", sqrt(num));
        }
        switch (choice == 1 || 2 || 3 || 4 || 5){
            printf("Enter your first number: ");
            scanf("%.2f", num1);
            printf("Enter your second number: ");
            scanf("%.2f", num2);

            case 1:
                printf("%.2f", num1+num2);
            
            case 2:
                printf("%.2f", num1-num2);
            
            case 3:
                printf("%.2f", num1*num2);
            
            case 4:
                printf("%.2f", num1/num2);
            
            case 5:
                printf("%.2f", num1**num2);
    }

        }

    return 0;
}

