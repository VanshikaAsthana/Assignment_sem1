//HANGMAN GAME IN C
#include <stdio.h>
#include <string.h>

void displayHangman(int attempts)
{
    switch(attempts) 
    {
        case 1: printf("\n\n  O\n"); break;
        case 2: printf("\n\n  O\n  |\n"); break;
        case 3: printf("\n\n  O\n  |\\\n"); break;
        case 4: printf("\n\n  O\n  |\\/\n"); break;
        case 5: printf("\n\n  O\n  |\\/\n  |\n"); break;
        case 6: printf("\n\n  O\n  |\\/\n  |\n /\\\n"); break;
        default: break;
    }
}

int main() 
{
    char word[]="constellation";
    int wordLength = strlen(word);
    char guessed[wordLength];
    int attempts = 0;
    int maxAttempts = 6;
    int correctGuesses = 0;
    for (int i = 0; i < wordLength; i++) 
    {
        guessed[i] = '_';
    }

    printf("Welcome to Hangman!\n");
    printf("Guess the word: \n");
    printf("(Enter letters only in small case)\n");

    while (attempts < maxAttempts)
    {
        printf("\nWord: ");
        for (int i = 0; i < wordLength; i++) 
        {
            printf("%c ", guessed[i]);
        }

        printf("\nEnter a letter: ");
        char guess;
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < wordLength; i++) 
        {
            if (word[i] == guess && guessed[i] == '_') 
            {
                guessed[i] = guess;
                found = 1;
                correctGuesses++;
            }
        }

        if (!found) 
        {
            attempts++;
            printf("\nIncorrect guess. You have %d attempts left.\n", maxAttempts - attempts);
            displayHangman(attempts);
        }

        if (correctGuesses == wordLength) 
        {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            break;
        }
    }

    if (attempts == maxAttempts) 
    {
        printf("\nGame over! The word was: %s\n", word);
    }

    return 0;
}
