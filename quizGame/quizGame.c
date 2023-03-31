#include <stdio.h>
#include <ctype.h>

int main() {

    char questions[][100] = {"1. Who discovered Brazil? ", 
                            "2. What city is the Statue of Liberty in? ",
                            "3. Do you know Mario? "};

    char options[][100] = { "A. Monkey D. Luffy", "B. Lionel Messi", "C. Pedro Alvares Cabral", "D. Shrek",
                            "A. Bikini Bottom", "B. Konoha", "C. Atlanta", "D. New York",
                            "A. Yes", "B. Mario who?", "C. No", "D. Mario Ayala"};

    char answers[3] = {'C', 'D', 'B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("--------------------\n");
    printf("     QUIZ GAME\n");
    

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("--------------------\n");
        printf("%s\n", questions[i]);
        printf("--------------------\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        printf("Guess: ");
        scanf(" %c", &guess);
        printf("--------------------\n");

        guess = toupper(guess);
        if (guess == answers[i]) {
            printf("CORRECT!\n");
            score++;
        }
        else {
            printf("WRONG!\n");
            printf("The correct answer is %c!\n", answers[i]);
        }
    }

    printf("--------------------\n");
    printf("Your score: %d/%d \n", score, numberOfQuestions);
    printf("--------------------\n");

    return 0;
}