#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// creating a new function
int Human(int Num_Human)
{
    int Card_Human;
    int Score_Human = 0;
    // int Num_Human;

    // randomly selecting card for human
    Card_Human = rand() % 13 + 1;

    switch (Card_Human)
    {
    case 1:
        printf("YOUR CARD %d: ACE [11 POINT]\n", Num_Human);
        Score_Human = Score_Human + 11;
        break;

    case 2:
        printf("YOUR CARD %d: 2 [2 POINT]\n", Num_Human);
        Score_Human = Score_Human + 2;
        break;

    case 3:
        printf("YOUR CARD %d: 3 [3 POINT]\n", Num_Human);
        Score_Human = Score_Human + 3;
        break;
    case 4:
        printf("YOUR CARD %d: 4 [4 POINT]\n", Num_Human);
        Score_Human = Score_Human + 4;
        break;
    case 5:
        printf("YOUR CARD %d: 5 [5 POINT]\n", Num_Human);
        Score_Human = Score_Human + 5;
        break;
    case 6:
        printf("YOUR CARD %d: 6 [6 POINT]\n", Num_Human);
        Score_Human = Score_Human + 6;
        break;
    case 7:
        printf("YOUR CARD %d: 7 [7 POINT]\n", Num_Human);
        Score_Human = Score_Human + 7;
        break;
    case 8:
        printf("YOUR CARD %d: 8 [8 POINT]\n", Num_Human);
        Score_Human = Score_Human + 8;
        break;
    case 9:
        printf("YOUR CARD %d: 9 [9 POINT]\n", Num_Human);
        Score_Human = Score_Human + 9;
        break;
    case 10:
        printf("YOUR CARD %d: 10 [10 POINT]\n", Num_Human);
        Score_Human = Score_Human + 10;
        break;
    case 11:
        printf("YOUR CARD %d: JACK [10 POINT]\n", Num_Human);
        Score_Human = Score_Human + 10;
        break;
    case 12:
        printf("YOUR CARD %d: QUEEN [10 POINT]\n", Num_Human);
        Score_Human = Score_Human + 10;
        break;
    case 13:
        printf("YOUR CARD %d: KING [10 POINT]\n", Num_Human);
        Score_Human = Score_Human + 10;
        break;

    default:
        break;
    } // end switch [human card 1]

    return Score_Human;
} // end function Human

int Computer(int Num_Comp)
{
    int Score_Comp = 0;
    int Card_Comp;
    // int Num_Comp;

    // randomly selecting card for human
    Card_Comp = rand() % 13 + 1;

    switch (Card_Comp)
    {
    case 1:
        printf("Computer's CARD %d: ACE [11 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 11;
        break;
    case 2:
        printf("Computer's CARD %d: 2 [2 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 2;
        break;
    case 3:
        printf("Computer's CARD %d: 3 [3 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 3;
        break;
    case 4:
        printf("Computer's CARD %d: 4 [4 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 4;
        break;
    case 5:
        printf("Computer's CARD %d: 5 [5 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 5;
        break;
    case 6:
        printf("Computer's CARD %d: 6 [6 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 6;
        break;
    case 7:
        printf("Computer's CARD %d: 7 [7 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 7;
        break;
    case 8:
        printf("Computer's CARD %d: 8 [8 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 8;
        break;
    case 9:
        printf("Computer's CARD %d: 9 [9 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 9;
        break;
    case 10:
        printf("Computer's CARD %d: 10 [10 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 10;
        break;
    case 11:
        printf("Computer's CARD %d: JACK [10 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 10;
        break;
    case 12:
        printf("Computer's CARD %d: QUEEN [10 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 10;
        break;
    case 13:
        printf("Computer's CARD %d: KING [10 POINT]\n", Num_Comp);
        Score_Comp = Score_Comp + 10;
        break;

    default:
        break;
    } // end switch [computer card 1]

    return Score_Comp;
}

int main()
{
    srand(time(0));
    // declaring of all variables

    int Game = 1;
    int Total_Score_Comp = 0;
    int Total_Score_Human = 0;
    int Card_Human = rand() % 13 + 1;
    int Card_Comp = rand() % 13 + 1;
    int Wins = 0;
    int Lose = 0;
    int Hit;
    int Diff_Comp = 0;
    int Diff_Human = 0;
    int Num_Human_1 = 0;
    int Num_Comp_1 = 0;
    char Extra[100000];

    // title page
    printf("########  ##          ###     ######  ##    ##        ##    ###     ######  ##    ##\n");
    printf("##     ## ##         ## ##   ##    ## ##   ##         ##   ## ##   ##    ## ##   ## \n");
    printf("##     ## ##        ##   ##  ##       ##  ##          ##  ##   ##  ##       ##  ## \n");
    printf("########  ##       ##     ## ##       #####           ## ##     ## ##       #####   \n");
    printf("##     ## ##       ######### ##       ##  ##    ##    ## ######### ##       ##  ##  \n");
    printf("##     ## ##       ##     ## ##    ## ##   ##   ##    ## ##     ## ##    ## ##   ## \n");
    printf("########  ######## ##     ##  ######  ##    ##   ######  ##     ##  ######  ##    ##\n");
    printf("\n");

    printf("enter any key to continue: ");
    scanf("%s", &Extra);
    printf("\n");

    // instrutctions

    printf("welcome to a game of black jack\n");
    printf("one who is closer to 21, without exceding it, is the winner.\n");
    printf("\n");
    printf("number cards have the same value as their number\n");
    printf("for example; 2 has the value of 2\n");
    printf("each face cards [king, queen and jack] are worth 10\n");
    printf("ace is of worth 11\n");
    printf(" \n");
    printf("INSTRUCTIONS:\n");
    printf("HIT = you get one more card\n");
    printf("STAND = you wish not to get any card\n");
    printf("\n");
    printf("NOTE: if computer total score is less than 17\n");
    printf("it will automatically hit one more card\n");
    printf("you can hit as many times as you can\n");
    printf("good luck\n");
    printf("\n");

    printf("enter any key to continue: ");
    scanf("%s", &Extra);
    printf("\n");

    // main game

    while (Game == 1)
    {
        // resetting the score
        Total_Score_Comp = 0;
        Total_Score_Human = 0;

        printf(" \n");
        // randomly selecting card 1 for human
        Num_Human_1 = 1;
        Total_Score_Human += Human(Num_Human_1);

        // randomly selecting card 2 for human
        Num_Human_1 = 2;
        Total_Score_Human += Human(Num_Human_1);

        printf(" \n");
        // printing scores of human
        printf("YOUR CURRENT SCORE: %d\n", Total_Score_Human);
        printf(" \n");

        printf("enter any key to continue: ");
        scanf("%s", &Extra);
        printf("\n");

        // randomly selecting card 1 for computer
        Num_Comp_1 = 1;
        Total_Score_Comp += Computer(Num_Comp_1);

        // randomly selecting card 2 for computer
        Num_Comp_1 = 2;
        Total_Score_Comp += Computer(Num_Comp_1);

        printf(" \n");
        // printing scores
        printf("YOUR CURRENT SCORE: %d\n", Total_Score_Human);
        printf("COMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);
        printf(" \n");

        // asking for to hit or stand
        printf(" \n");
        printf("do you wisk to hit or stand [1 for Hit. 0 for Stand]: ");
        scanf("%d", &Hit);

        // validating
        while (Hit != 1 && Hit != 0)
        {
            printf("INVALID INPUT. Please input again:\n");
            scanf("%d", &Hit);
        } // end while

        printf(" \n");
        // hit or stand
        while (Hit == 1)
        {

            // randomly selecting card for human
            Num_Human_1 ++;
            Total_Score_Human += Human(Num_Human_1);

            printf(" \n");
            // printing scores
            printf("YOUR CURRENT SCORE: %d\n", Total_Score_Human);
            printf("COMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);

            // asking for to hit or stand again
            printf(" \n");
            printf("do you wisk to hit or stand [1 for Hit. 0 for Stand]: ");
            scanf("%d", &Hit);
            printf(" \n");

            // validating
            while (Hit != 1 && Hit != 0)
            {
                printf("INVALID INPUT. Please input again: \n");
                scanf("%d", &Hit);
                printf(" \n");
            } // end while

        } // end while

        printf("enter any key to continue: ");
        scanf("%s", &Extra);
        printf("\n");

        if (Total_Score_Comp < 17)
        {
            printf("as computer score < 17, computer will gain one more card\n");
            // randomly selecting card for computer
            Num_Comp_1 ++;
            Total_Score_Comp += Computer(Num_Comp_1);

            // printing scores
            printf("YOUR CURRENT SCORE: %d\n", Total_Score_Human);
            printf("COMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);

            printf("enter any key to continue: \n");
            scanf("%s", &Extra);
            printf("\n");
        } // end if

        // checking the scores

        if (Total_Score_Comp > 21)
        {
            printf("computer score > 21\n");
            printf("computer score busted\n");
            printf("computer current score: 0\n");
            printf("\n");
            Total_Score_Comp = 0;
        } // end if

        if (Total_Score_Human > 21)
        {
            printf("human score > 21\n");
            printf("human score busted\n");
            printf("human current score: 0");
            printf("\n");
            Total_Score_Human = 0;
        } // end if

        // calculating the scores
        Diff_Comp = 21 - Total_Score_Comp;
        Diff_Human = 21 - Total_Score_Human;

        // printing scores
        printf("YOUR CURRENT SCORE: %d\n", Total_Score_Human);
        printf("COMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);
        printf("\n");

        // checking if the user won or lost
        if (Diff_Comp > Diff_Human)
        {
            Wins = Wins + 1;
            printf("YOU'VE WON\n");
        } // end if
        else if (Diff_Comp < Diff_Human)
        {
            Lose = Lose + 1;
            printf("you've lost");
        } // end else if
        else
        {
            printf("tie\n");
        } // end else

        // asking to replay or exit the game.
        printf(" \n");
        printf("Do you wish to continue [1 for Yes, 0 for No]: ");
        scanf("%d", &Game);
        printf(" \n");

        while (Game != 1 && Game != 0)
        {
            printf("INVALID INPUT. PLEASE ENTER 1 FOR YES OR 0 FOR NO.\n");
            scanf("%d", &Game);
        } // end while

    } // end while
    printf("total wins: %d\n", Wins);
    printf("total loses: %d\n", Lose);
    printf(" \n");
    printf("thank you for playing\n");
    printf(" \n");

    printf("enter any key to exit\n");
    scanf("%s", &Extra);

    return 0;
} // end main