#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char playerName[50];
    char playAgain;
    int difficulty;
    int secretNumber;
    int guess;
    int attempts;
    int maxAttempts;
    int score;

    srand(time(NULL));

    printf("=========================================\n");
    printf("       NUMBER GUESSING GAME PRO MAX\n");
    printf("=========================================\n");

    printf("Enter Player Name: ");
    scanf("%s", playerName);

    do {

        printf("\n=========================================\n");
        printf("Choose Difficulty Level\n");
        printf("=========================================\n");
        printf("1. Easy   (1-50, 10 Attempts)\n");
        printf("2. Medium (1-100, 7 Attempts)\n");
        printf("3. Hard   (1-200, 5 Attempts)\n");
        printf("=========================================\n");
        printf("Enter Choice: ");
        scanf("%d", &difficulty);

        if(difficulty == 1) {
            secretNumber = rand() % 50 + 1;
            maxAttempts = 10;
        }
        else if(difficulty == 2) {
            secretNumber = rand() % 100 + 1;
            maxAttempts = 7;
        }
        else {
            secretNumber = rand() % 200 + 1;
            maxAttempts = 5;
        }

        score = 100;
        attempts = 0;

        printf("\nGame Started! Best of Luck, %s!\n", playerName);

        while(attempts < maxAttempts) {

            printf("\n-----------------------------------------\n");
            printf("Attempt : %d/%d\n", attempts + 1, maxAttempts);
            printf("Score   : %d\n", score);
            printf("-----------------------------------------\n");

            printf("Enter Your Guess: ");
            scanf("%d", &guess);

            attempts++;

            if(guess == secretNumber) {

                printf("\n=========================================\n");
                printf("          CONGRATULATIONS!\n");
                printf("=========================================\n");
                printf("Player Name   : %s\n", playerName);
                printf("Correct Number: %d\n", secretNumber);
                printf("Attempts Used : %d\n", attempts);
                printf("Final Score   : %d\n", score);

                if(score >= 80)
                    printf("Performance   : Excellent\n");
                else if(score >= 50)
                    printf("Performance   : Good\n");
                else
                    printf("Performance   : Average\n");

                printf("=========================================\n");
                break;
            }

            if(guess < secretNumber)
                printf("Hint: Too Low!\n");
            else
                printf("Hint: Too High!\n");

            score -= 10;
        }

        if(guess != secretNumber) {
            printf("\n=========================================\n");
            printf("             GAME OVER\n");
            printf("=========================================\n");
            printf("Player Name   : %s\n", playerName);
            printf("Correct Number: %d\n", secretNumber);
            printf("Better Luck Next Time!\n");
            printf("=========================================\n");
        }

        printf("\nDo You Want To Play Again? (Y/N): ");
        scanf(" %c", &playAgain);

    } while(playAgain == 'Y' || playAgain == 'y');

    printf("\nThank You For Playing!\n");

    return 0;
}
