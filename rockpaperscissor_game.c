#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// create rock , paper , scissors game

int main()
{
    char name[20];
    char a;
    char b;
    int player_score=0;
    int comp_score=0;

    printf("Enter your name\n");
    gets(name);

    for (int i = 1; i <= 3; i++)
    {
        printf("%s's turn:\n", name);
        printf("round %i: enter your choice (r for rock, s for scissors and p for paper):", i);
        scanf("%c", &a);
        getchar();
        
        

        srand(time(NULL)); // srand takes seed as as a input and is defined inside stdlib.h
        if (rand() % 3 == 1)
        {
            b = 'r';
        }
        else if (rand() % 3 == 2)
        {
            b = 'p';
        }
        else
        {
            b = 's';
        }

        printf(" computer's turn: %c\n", b);
        if (a == b)
        {
            printf("the round ties. no one gets the point in this round\n");
            printf("your score is: %d\ncomputer's score is: %d\n", player_score, comp_score);
        }
        else if (a == 'r' && b == 's'|| a == 'p' && b == 'r' || a == 's' && b == 'p')
        {
            player_score = player_score + 1;
            printf("you won this round\n");
            printf("your score is: %d\ncomputer's score is: %d\n", player_score, comp_score);
        }
        else if (a == 'r' && b == 'p' || a == 'p' && b == 's' || a == 's' && b == 'r' )
        {
            comp_score = comp_score + 1;
            printf("you lost this round\n");
            printf("your score is: %d\ncomputer's score is: %d\n", player_score, comp_score);
        }
    }
    printf("your total score is: %d\n", player_score);

    if (player_score > comp_score)
        printf(" YOU WON THE GAME! congratulations!\n");
    else if (player_score < comp_score)
        printf("YOU LOST THE GAME. Better luck next time!");
        else
         printf("IT IS A TIE! No winner.");
        

    return 0;
}
