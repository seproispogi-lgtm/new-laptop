#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int studentCount, currentStudent, score, totalScore, highScore, lowScore,
        aveScore, passCount, failCount;
    char category[70];
        printf("Enter Number of Students: ");
        scanf("%d", &studentCount);
            while (studentCount < 0){
                printf("Invalid Input: Number should be greater than ZERO.\n"); 
                printf("input valid number.\n");
                printf("Enter Number of Students: ");
                scanf("%d", &studentCount);
            }
                totalScore = 0;
                highScore = 0;
                lowScore = 0;
                passCount = 0;
                failCount = 0;
                for(currentStudent = 1; currentStudent = studentCount; currentStudent++ ) {
                    printf("Enter the SCORE of the Student: ");
                    scanf("%d", &score);
                        while(score<0 && score > 100){
                            printf("Invalid Score: Score should be from 0 to 100.\n");
                            printf("Enter score again.\n");
                            printf("Enter the SCORE of the Student: ");
                            scanf("%d", &score);
                        }
                        if(currentStudent = studentCount){
                            break;
                        }
    }
}

