#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

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
        
        for(currentStudent = 0; currentStudent < studentCount; currentStudent++ ) {
                        printf("Enter the SCORE of the Student: ");
                        scanf("%d", &score);
                            while (score < 0 || score > 100)
                            {   printf("Invalid Score: Score should be from 0 to 100.\n");
                                printf("Enter score again.\n");
                                printf("Enter the SCORE of the Student: ");
                                scanf("%d", &score);
                            }
                            if(score >= 90){strcpy(category, "EXCELLENT");}
                            else if(score >= 80){strcpy(category, "VERY GOOD");}
                            else if(score >= 75){strcpy(category, "GOOD");}
                            else if(score >= 60){strcpy(category, "NEEDS IMPROVEMENT");}
                            else{strcpy(category, "FAIL");}
                                printf("Student %d\nCategory: %s ", currentStudent);
                        totalScore = score + totalScore;
                        if(currentStudent = 1){score = highScore; score = lowScore;}
                        else{if(score > highScore){highScore = score;} if(score < lowScore){lowScore=score;}}
                        if(score>=60){passCount++;} else{failCount++;}
                    }
        aveScore = totalScore / studentCount;

        printf("Highes Score: %d", highScore);
        printf("Lowest Score: %d", lowScore);
        printf("Total Score: %d", totalScore);
        printf("Average Score: %d", aveScore);
        printf("Passing Students: %d", passCount);
        printf("Failing Students: %d", failCount);

}
