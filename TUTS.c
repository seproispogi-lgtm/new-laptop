/* #include <stdio.h>
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
    
}*/

// find multiples of the input number
#include <stdio.h>
#include <math.h>   
#include <stdbool.h>
#include <ctype.h>


int main(){
    int get, start, qot;
    float get1, start1, qot1;
    int input;

    while(true){
        printf("\n\nFinding your Number's Multiples(up to 100!)\n"
            "Choose:\n"
            "1. Whole Numbers\n"
            "2. Decimals\n"
            "Press ctrl + C to exit..\n"
            "Enter your choice: ");
        scanf("%d", &input);

        if (input == 1){
            printf("Enter your Number: ");
            scanf("%d", &get);
            int i = get;
            while ( i <=100){if( i % get == 0){printf("%d\n", i); } i += get; }
        }

        else if(input == 2){
            printf("Enter your Number: ");
            scanf("%f", &get1); 
            float i = get1;
            while ( i <= 100 ){if(fmod(i, get1) == 0){printf("%.2f\n", i); } i += get1;}
        }

        else{
            printf("Invalid input! Try again\n");
        }

        char again;
        printf("Want to Continue[Y/N]: ");
        scanf(" %c", &again);
        again = toupper(again); if(again != 'Y'){printf("Now exiting..");break;}

    printf("\n");
    }
    }
        