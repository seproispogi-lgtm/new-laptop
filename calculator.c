#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
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
        
        printf("%s", pili);
        printf("Choose your operation: ");
        scanf("%d", &choice);

        if(choice == 7){
            printf("Comeback Again!");
            break; 
        }

        else if(choice == 6){
            printf("Enter your Number: \n");
            scanf("%f", &num);

            printf("Result: %.2f\n", sqrt(num));
        }
        else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5){
            printf("Enter your first number: ");
            scanf("%f", &num1);   
            printf("Enter your second number: ");
            scanf("%f", &num2);

            if (choice == 1){printf("Result: %.2f\n", num1 + num2);}
            else if(choice == 2){printf("Result: %.2f\n", num1 - num2);}
            else if(choice == 3){printf("Result: %.2f\n", num1 * num2);}
            else if(choice == 4){printf("Result: %.2f\n", num1 / num2);}
            else if(choice == 5){float result = pow(num1, num2); printf("Result: %.2f\n", result);}

            else {
            printf("Invalid input! Select Another\n");
        }

        char again;
        printf("Want to Continue[Y/N]: ");
        scanf(" %c", &again);
        again = toupper(again);

        if (again != 'Y'){
            printf("Come Again!");
            break;
        }
    }
    printf("\n");
    return 0;
}

}

