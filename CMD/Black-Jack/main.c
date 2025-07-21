#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

    void W_Printing(char Word[1000])
{
    int len = strlen(Word);

    for (int i = 0; i < len; i++)
    {
        printf("%c", Word[i]);
        Sleep(70);
    }
}

    void Game_Loading()
{
    for (int i = 0; i < 4; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf(".");
            Sleep(500);
        }
        printf("\b \b");
        printf("\b \b");
        printf("\b \b");
        Sleep(500);
    }

    W_Printing("Game files loaded.\n\n");
    Sleep(500);
}

// creating a new function
int Human(int Num_Human)
{
    int Card_Human;
    int Score_Human = 0;
    // int Num_Human;

    // randomly selecting card for human
    Card_Human = rand() % 17 + 1;

    printf("\033[0;34m");

    PlaySound(TEXT("Sounds/card.wav"), NULL, SND_FILENAME | SND_SYNC);

    switch (Card_Human)
    {
    case 1:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|A    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____A| \n");
        printf("\033[0;32mYOUR CARD %d: ACE [11 POINT]\n", Num_Human);
        Score_Human += 11;
        break;

    case 2:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|2    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____2| \n");
        printf("\033[0;32mYOUR CARD %d: 2 [2 POINT]\n", Num_Human);
        Score_Human += 2;
        break;

    case 3:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|3    | \n");
        printf("|  ♣  | \n");
        printf("|     | \n");
        printf("|____3| \n");
        printf("\033[0;32mYOUR CARD %d: 3 [3 POINT]\n", Num_Human);
        Score_Human += 3;
        break;

    case 4:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|4    | \n");
        printf("|  ♠  | \n");
        printf("|     | \n");
        printf("|____4| \n");
        printf("\033[0;32mYOUR CARD %d: 4 [4 POINT]\n", Num_Human);
        Score_Human += 4;
        break;

    case 5:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|5    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____5| \n");
        printf("\033[0;32mYOUR CARD %d: 5 [5 POINT]\n", Num_Human);
        Score_Human += 5;
        break;

    case 6:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|6    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____6| \n");
        printf("\033[0;32mYOUR CARD %d: 6 [6 POINT]\n", Num_Human);
        Score_Human += 6;
        break;

    case 7:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|7    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____7| \n");
        printf("\033[0;32mYOUR CARD %d: 7 [7 POINT]\n", Num_Human);
        Score_Human += 7;
        break;

    case 8:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|8    | \n");
        printf("|  ♣  | \n");
        printf("|     | \n");
        printf("|____8| \n");
        printf("\033[0;32mYOUR CARD %d: 8 [8 POINT]\n", Num_Human);
        Score_Human += 8;
        break;

    case 9:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|9    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____9| \n");
        printf("\033[0;32mYOUR CARD %d: 9 [9 POINT]\n", Num_Human);
        Score_Human += 9;
        break;

    case 10:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|10   | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|___10| \n");
        printf("\033[0;32mYOUR CARD %d: 10 [10 POINT]\n", Num_Human);
        Score_Human += 10;
        break;

    case 11:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|J    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____J| \n");
        printf("\033[0;32mYOUR CARD %d: JACK [10 POINT]\n", Num_Human);
        Score_Human += 10;
        break;

    case 12:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|Q    | \n");
        printf("|  ♣  | \n");
        printf("|     | \n");
        printf("|____Q| \n");
        printf("\033[0;32mYOUR CARD %d: QUEEN [10 POINT]\n", Num_Human);
        Score_Human += 10;
        break;

    case 13:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|K    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____K| \n");
        printf("\033[0;32mYOUR CARD %d: KING [10 POINT]\n", Num_Human);
        Score_Human += 10;
        break;

    case 14:
        printf("\033[0;35m");
        printf(" _____  \n");
        printf("|J    | \n");
        printf("|('o')| \n");
        printf("|     | \n");
        printf("|____J| \n");
        printf("\033[0;32mYOUR CARD %d: Joker [21 POINT]\n", Num_Human);
        Score_Human += 21;
        break;

    case 15:
        printf("\033[0;35m");
        printf(" ______ \n");
        printf("|J     | \n");
        printf("|(¬‿¬)| \n");
        printf("|      | \n");
        printf("|____ J| \n");
        printf("\033[0;32mYOUR CARD %d: Joker [-21 POINT]\n", Num_Human);
        Score_Human -= 21;
        break;

    case 16:
        printf("\033[0;35m");
        printf(" _____ \n");
        printf("|J    | \n");
        printf("|(^-^)| \n");
        printf("|     | \n");
        printf("|___ J| \n");
        printf("\033[0;32mYOUR CARD %d: Joker [=21 POINT]\n", Num_Human);
        Score_Human = 21;
        break;

    case 17:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|A    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____A| \n");
        printf("\033[0;32mYOUR CARD %d: ACE [1 POINT]\n", Num_Human);
        Score_Human += 1;
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
    Card_Comp = rand() % 17 + 1;

    PlaySound(TEXT("Sounds/card.wav"), NULL, SND_FILENAME | SND_SYNC);
    
    switch (Card_Comp)
    {
    case 1:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|A    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____A| \n");
        printf("\033[0;32mComputer's CARD %d: ACE [11 POINT]\n", Num_Comp);
        Score_Comp += 11;
        break;

    case 2:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|2    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____2| \n");
        printf("\033[0;32mComputer's CARD %d: 2 [2 POINT]\n", Num_Comp);
        Score_Comp += 2;
        break;

    case 3:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|3    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____3| \n");
        printf("\033[0;32mComputer's CARD %d: 3 [3 POINT]\n", Num_Comp);
        Score_Comp += 3;
        break;

    case 4:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|4    | \n");
        printf("|  ♣  | \n");
        printf("|     | \n");
        printf("|____4| \n");
        printf("\033[0;32mComputer's CARD %d: 4 [4 POINT]\n", Num_Comp);
        Score_Comp += 4;
        break;

    case 5:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|5    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____5| \n");
        printf("\033[0;32mComputer's CARD %d: 5 [5 POINT]\n", Num_Comp);
        Score_Comp += 5;
        break;

    case 6:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|6    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____6| \n");
        printf("\033[0;32mComputer's CARD %d: 6 [6 POINT]\n", Num_Comp);
        Score_Comp += 6;
        break;

    case 7:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|7    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____7| \n");
        printf("\033[0;32mComputer's CARD %d: 7 [7 POINT]\n", Num_Comp);
        Score_Comp += 7;
        break;

    case 8:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|8    | \n");
        printf("|  ♣  | \n");
        printf("|     | \n");
        printf("|____8| \n");
        printf("\033[0;32mComputer's CARD %d: 8 [8 POINT]\n", Num_Comp);
        Score_Comp += 8;
        break;

    case 9:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|9    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____9| \n");
        printf("\033[0;32mComputer's CARD %d: 9 [9 POINT]\n", Num_Comp);
        Score_Comp += 9;
        break;

    case 10:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|10   | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|___10| \n");
        printf("\033[0;32mComputer's CARD %d: 10 [10 POINT]\n", Num_Comp);
        Score_Comp += 10;
        break;

    case 11:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|J    | \n");
        printf("|  ♦  | \n");
        printf("|     | \n");
        printf("|____J| \n");
        printf("\033[0;32mComputer's CARD %d: JACK [10 POINT]\n", Num_Comp);
        Score_Comp += 10;
        break;

    case 12:
        printf("\033[0;34m");
        printf(" _____  \n");
        printf("|Q    | \n");
        printf("|  ♣  | \n");
        printf("|     | \n");
        printf("|____Q| \n");
        printf("\033[0;32mComputer's CARD %d: QUEEN [10 POINT]\n", Num_Comp);
        Score_Comp += 10;
        break;

    case 13:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|K    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____K| \n");
        printf("\033[0;32mComputer's CARD %d: KING [10 POINT]\n", Num_Comp);
        Score_Comp += 10;
        break;

    case 14:
        printf("\033[0;35m");
        printf(" _____  \n");
        printf("|J    | \n");
        printf("|('o')| \n");
        printf("|     | \n");
        printf("|____J| \n");
        printf("\033[0;32mYOUR CARD %d: Joker [21 POINT]\n", Num_Comp);
        Score_Comp += 21;
        break;

    case 15:
        printf("\033[0;35m");
        printf(" ______ \n");
        printf("|J     | \n");
        printf("|(¬‿¬)| \n");
        printf("|      | \n");
        printf("|____ J| \n");
        printf("\033[0;32mYOUR CARD %d: Joker [-21 POINT]\n", Num_Comp);
        Score_Comp -= 21;
        break;

    case 16:
        printf("\033[0;35m");
        printf(" _____ \n");
        printf("|J    | \n");
        printf("|(^-^)| \n");
        printf("|     | \n");
        printf("|___ J| \n");
        printf("\033[0;32mYOUR CARD %d: Joker [=21 POINT]\n", Num_Comp);
        Score_Comp = 21;
        break;

    case 17:
        printf("\033[0;31m");
        printf(" _____  \n");
        printf("|A    | \n");
        printf("|  ♥  | \n");
        printf("|     | \n");
        printf("|____A| \n");
        printf("\033[0;32mComputer's CARD %d: ACE [1 POINT]\n", Num_Comp);
        Score_Comp += 11;
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
    int Counter;
    int temp_Score;

    Game_Loading();

    // title page
    printf("\033[0;32m");
    printf("########  ##          ###     ######  ##    ##        ##    ###     ######  ##    ##\n");
    printf("##     ## ##         ## ##   ##    ## ##   ##         ##   ## ##   ##    ## ##   ## \n");
    printf("##     ## ##        ##   ##  ##       ##  ##          ##  ##   ##  ##       ##  ## \n");
    printf("########  ##       ##     ## ##       #####           ## ##     ## ##       #####   \n");
    printf("##     ## ##       ######### ##       ##  ##    ##    ## ######### ##       ##  ##  \n");
    printf("##     ## ##       ##     ## ##    ## ##   ##   ##    ## ##     ## ##    ## ##   ## \n");
    printf("########  ######## ##     ##  ######  ##    ##   ######  ##     ##  ######  ##    ##\n");
    printf("\n");
    Sleep(500);

    printf("\033[033menter any key to continue: ");
    scanf("%s", &Extra);
    printf("\n");

    // instrutctions

    printf("\033[037m");
    W_Printing("welcome to a game of black jack\n");
    W_Printing("one who is closer to \033[031m21\033[037m, without exceeding it, is the winner.\n");
    W_Printing("\n");
    W_Printing("number cards have the same value as their number\n");
    W_Printing("for example; \033[031m2 \033[037mhas the value of \033[033m2 \033[037m\n");
    W_Printing("each face cards \033[031m[king, queen and jack]\033[037m are worth \033[033m10 \033[037m\n");
    W_Printing("\033[031mace \033[037mis of worth either \033[033m1 \033[037mor \033[033m11 \033[037m\n");
    W_Printing("there are also \033[032m3 joker \033[037mcards\n");
    W_Printing("first joker \033[033madds 21 \033[037mpoints to your score\n");
    W_Printing("second joker \033[033msubtracts 21 \033[037mpoints from your score\n");
    W_Printing("third joker \033[033mmakes your score 21 \033[037m\n");
    W_Printing("\n");
    W_Printing("INSTRUCTIONS:\n");
    W_Printing("\033[031mHIT = \033[37myou get one more card\n");
    W_Printing("\033[034mSTAND = \033[37myou wish not to get any card\n");
    W_Printing("\n");
    W_Printing("\033[032mNOTE: \033[037mif computer total score is less than 17\n");
    W_Printing("it will automatically hit one more card\n");
    W_Printing("you can hit only '5' times.\n");
    W_Printing("good luck\n");
    W_Printing("\n");

    printf("\033[33menter any key to continue: ");
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

        temp_Score = Human(Num_Human_1);

        if (temp_Score == 21)
        {
            Total_Score_Human = 21;
        }
        else
        {
            Total_Score_Human += temp_Score;
        }

        // randomly selecting card 2 for human
        Num_Human_1 = 2;

        temp_Score = Human(Num_Human_1);

        if (temp_Score == 21)
        {
            Total_Score_Human = 21;
        }
        else
        {
            Total_Score_Human += temp_Score;
        }

        printf(" \n");
        // printing scores of human
        printf("\033[0;34mYOUR CURRENT SCORE: %d\n", Total_Score_Human);
        printf(" \n");

        printf("\033[0;33menter any key to continue: ");
        scanf("%s", &Extra);
        printf("\n");

        // randomly selecting card 1 for computer
        Num_Comp_1 = 1;

        temp_Score = Computer(Num_Comp_1);

        if (temp_Score == 21)
        {
            Total_Score_Comp = 21;
        }
        else
        {
            Total_Score_Comp += temp_Score;
        }

        // randomly selecting card 2 for computer
        Num_Comp_1 = 2;
        
        temp_Score = Computer(Num_Comp_1);

        if (temp_Score == 21)
        {
            Total_Score_Comp = 21;
        }
        else
        {
            Total_Score_Comp += temp_Score;
        }

        printf(" \n");
        // printing scores
        printf("\033[0;34mYOUR CURRENT SCORE: %d\n", Total_Score_Human);
        printf("\033[0;31mCOMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);
        printf(" \n");

        // Initialize Counter
        Counter = 0;
        printf("\033[037m");
        while (1)
        {
            Counter++;
            if (Counter >= 6)
            {
                printf("\n\033[037mYou have reached the limit of your hits.\n");
                break;
            }

            // Asking user to hit or stand
            printf("\n\033[037mdo you wish to hit or stand [1 for Hit. 0 for Stand]: ");
            scanf("%d", &Hit);

            // Validating input
            while (Hit != 1 && Hit != 0)
            {
                printf("\n\033[037mINVALID INPUT. Please input again: ");
                scanf("%d", &Hit);
            }       

            // If the user chooses to stand
            if (Hit == 0)
            {
                printf("You chose to stand.\n");
                break;
            }

            // Randomly selecting card for human
            Num_Human_1++;

            temp_Score = Human(Num_Human_1);

            if (temp_Score == 21)
            {
                Total_Score_Human = 21;
            }
            else
            {
                Total_Score_Human += temp_Score;
            }

            // Printing scores
            printf(" \n");
            printf("\033[0;34mYOUR CURRENT SCORE: %d\n", Total_Score_Human);
            printf("\033[0;31mCOMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);

            // printf("C: %d\n", Counter);
        } // end while

        printf("\n\033[033menter any key to continue: ");
        scanf("%s", &Extra);
        printf("\n");

        printf("\033[037m");
        if (Total_Score_Comp < 17)
        {
            printf("as computer score < 17, computer will gain one more card\n");
            // randomly selecting card for computer
            Num_Comp_1 ++;
            
            temp_Score = Computer(Num_Comp_1);

            if (temp_Score == 21)
            {
                Total_Score_Comp = 21;
            }
            else
            {
                Total_Score_Comp += temp_Score;
            }

            // printing scores
            printf("\033[0;34mYOUR CURRENT SCORE: %d\n", Total_Score_Human);
            printf("\033[0;31mCOMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);

            printf("\n\033[0;33menter any key to continue: ");
            scanf("%s", &Extra);
            printf("\n");
        } // end if

        // checking the scores
        printf("\033[037m");
        if (Total_Score_Comp > 21)
        {
            printf("computer score > 21\n");
            printf("computer score busted\n");
            printf("\n");
            Total_Score_Comp = 0;
        } // end if

        if (Total_Score_Human > 21)
        {
            printf("human score > 21\n");
            printf("human score busted\n");
            printf("\n");
            Total_Score_Human = 0;
        } // end if

        // calculating the scores
        Diff_Comp = 21 - Total_Score_Comp;
        Diff_Human = 21 - Total_Score_Human;

        // printing scores
        printf("\033[0;34mYOUR CURRENT SCORE: %d\n", Total_Score_Human);
        printf("\033[0;31mCOMPUTER CURRENT SCORE: %d\n", Total_Score_Comp);
        printf("\n");

        // checking if the user won or lost
        if (Diff_Comp > Diff_Human)
        {
            Wins = Wins + 1;
            printf("\033[037mas human score is closer to 21 than that of computer's\n");
            printf("\033[0;34mYOU'VE WON\n");
        } // end if
        
        else if (Diff_Comp < Diff_Human)
        {
            Lose = Lose + 1;
            printf("\033[037mas comp score is closer to 21 as that yours\n");
            printf("\033[0;31myou've lost\n");
        } // end else if
        
        else
        {
            printf("\033[0;32mtie\n");
        } // end else

        // asking to replay or exit the game.
        printf(" \n");
        printf("\033[0;37mDo you wish to continue [1 for Yes, 0 for No]: ");
        scanf("%d", &Game);
        printf(" \n");

        while (Game != 1 && Game != 0)
        {
            printf("INVALID INPUT. PLEASE ENTER 1 FOR YES OR 0 FOR NO.\n");
            scanf("%d", &Game);
        } // end while

    } // end while

    printf("\033[034mtotal wins: %d\n", Wins);
    printf("\033[031mtotal loses: %d\n", Lose);
    printf(" \n");
    printf("\033[033mthank you for playing\n");
    printf(" \n");

    printf("\033[037menter any key to exit\n");
    scanf("%s", &Extra);

    return 0;
} // end main