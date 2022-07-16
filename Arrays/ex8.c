// Takes 5 quiz grades for 5 students and computes the total and average score for 
// each student and the average, high and low scores for each quiz
#include <stdio.h>

#define studentNumber 5
#define quizNumber 5

int main (void) {

    int n, quizSum[quizNumber] = {0}, studentSum[studentNumber] = {0};
    int highScores[quizNumber] = {0}, lowScores[quizNumber] = {0};

    for (int i = 0; i < quizNumber; i++)
        lowScores[i] = 100;
    
    for (int i = 0; i < studentNumber; i++) {
        printf("Enter %d grades for student %d: ", quizNumber, i + 1);
        for (int j = 0; j < quizNumber; j++){
            scanf("%d", &n);
            studentSum[i] += n;
            quizSum[j] += n;
            if (highScores[j] < n) highScores[j] = n;
            if (lowScores[j] > n) lowScores[j] = n;
        }
    }

    for (int i = 0; i < studentNumber; i++) 
        printf("Student %d: Score    %d\n           Average: %.2f\n", i+1, studentSum[i], (float) studentSum[i] / quizNumber);
    printf("\n");
    for (int i = 0; i < quizNumber; i++)
        printf("Quiz #%d: Average:    %.2f\n         High score: %d\n         Low score:  %d\n", i+1, 
                                                                    (float)quizSum[i]/quizNumber, highScores[i], lowScores[i]);

    

    return 0;
}