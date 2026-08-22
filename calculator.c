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
            printf("%.2f", sqrt(num));
        }
        else if (choice == 1 || 2 || 3 || 4 || 5){
            printf("Enter your first number: ");
            scanf("%.2f", num1);
            printf("Enter your second number: ");
            scanf("%.2f", num2);

            if (choice == 1){printf("%.2f", num1+num2);}
            else if(choice == 2){printf("%.2f", num1-num2);}
            else if(choice == 3){printf("%.2f", num1*num2);}
            else if(choice == 4){printf("%.2f", num1/num2);}
            else if(choice == 5){float result = pow(num1, num2); printf("%.2f", result);}
        else;
        printf("Invalid input! Select Another");
        
        char again;
        printf("Want to Continue[Y/N]: ");
        scanf("%c", toupper(again));
        
        if (again != 'Y'){
            printf("Comeagain");
            break;
        }



    }

    return 0;
}

}

