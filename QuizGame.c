#include<stdio.h>
#include<ctype.h>

int main()
{
    char questions[][100] ={"1. What year did the C language debut?: ",
                            "2. wHO IS CREDITED WITH CREATING c?: ",
                            "3. What is predecessor of C?: "};
    
    
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975","D. 1999",
                            "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                            "A. Objective C", "B. B", "C. C++", "D. C#"};


    char answers[3] = {'B','A','B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("Quiz Game\n");

    for(int i =0; i<numberOfQuestions; i++ )
    {
        printf("********************\n");
        printf("%s\n", questions[i]);
        printf("********************\n");

        for(int j =(i*4); j<(i*4)+4; j++)
        {
            printf("%s\n",options[j]);
        }

    printf("Guess: ");
    scanf(" *%c", &guess);
    scanf("%c"); //clear \n from input buffer

    guess = toupper(guess);

    if(guess == answers[i])
    {
        printf("You're Correct\n");
        score++;
    }
    else
    {
        printf("You're Wrong\n");
    }

    }

    printf("********************\n");
    printf("Final Score : %d/%d\n", score, numberOfQuestions);

    return 0;

}