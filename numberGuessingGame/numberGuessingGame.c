#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;
    int guess, guesses, anwser;

    //uses the current time as a seed
    srand(time(0)); 

    //generates a random num between MIN and MAX
    anwser = (rand() % MAX) + MIN; 

    printf("\n");
    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess < anwser) {
            printf("Too low!\n");
        }
        else if (guess > anwser) {
            printf("Too high!\n");
        }
        else {
            printf("----------------\n");
            printf("CORRECT!!!\n");
        }
        guesses++;
    } while (guess != anwser);
    
    printf("----------------\n");
    printf("Anwser: %d\n", anwser);
    printf("Guesses: %d\n", guesses);
    printf("----------------\n");
    return 0;
}