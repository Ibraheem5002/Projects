#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
        for (int j = 0; j < 3; j++)
        {
            printf(".");
            Sleep(500);
        }
    printf("\b \b");
    printf("\b \b");
    printf("\b \b");
    Sleep(500);
    }

    W_Printing("\nGame Files Loaded.\n\n");
}

    void B_Printing(int Live, int Blank)
{
    int Choice;

    while (1)
    {
        if (Live <= 0 && Blank <= 0)
        {
            break;
        }
        else if (Live > 0 && Blank > 0)
        {
            Choice = rand() % 2;
        }
        else if (Live > 0 && Blank <= 0)
        {
            Choice = 1;
        }
        else
        {
            Choice = 0;
        }
        
        switch (Choice)
        {
        case 1:
            printf("\033[31m[|]");
            Live -= 1;
            Sleep(500);
            break;
        
        case 0:
            printf("\033[34m[ ]");
            Blank -= 1;
            Sleep(500);
            break;
        
        default:
            break;
        }
    }
    PlaySound(TEXT("Sounds/reloading.wav"), NULL, SND_FILENAME | SND_SYNC); // playing the sound.
    W_Printing("\n\n\033[32mThe bullets are loaded in a random order\n\n");
}

    void Human(int Bullet_Count, int Live_Count, int Blank_Count, int Lives_Human, int Lives_Comp, int Result[])
{
    int Option;
    int Loaded;
    int size = Bullet_Count;
    int Array[size];
    int Next_Turn = 0;
    int Last[size];
    int OK = 0;
    int Comments;
    int Exit = 0;

    printf("\033[32m");
    W_Printing("your turn\n\n");
    Sleep(500);
    
    while (1)
    {
        if (Exit == 1)
        {
            break;
        }
        
        if (Bullet_Count > 0 && Lives_Comp > 0 && Lives_Human > 0)
        {
            Sleep(400);
            printf("\033[33mdo you wish to shoot yourself or me? \033[37m[1 for yourself, 0 for me]\033[33m: ");
            Sleep(500);
            while (1)
            {
                scanf("%d", &Option);

                if (Option == 1 || Option == 0)
                {
                    break;
                }
                
                if (Option != 1 && Option != 0)
                {
                    printf("invalid input, please input again:");
                }
                
            }
            printf("\n\n");

            // checking the next bullet. 1 if live, 0 if blank.
            if (Live_Count > 0 && Blank_Count > 0)
            {
                Loaded = rand() % 2;
            }
            else if (Live_Count > 0 && Blank_Count <= 0)
            {
                Loaded = 1;
            }
            else if (Live_Count <= 0 && Blank_Count > 0)
            {
                Loaded = 0;
            }
            else
            {
                Exit = 1;
                break;
            }
            
            // playing the case.
            switch (Option)
            {
                case 1:
                    // shoot yourself + loaded
                    if (Loaded == 1)
                    {
                        printf("\033[31mBANG\n");
                        PlaySound(TEXT("Sounds/live.wav"), NULL, SND_FILENAME | SND_SYNC);
                        Sleep(500);
                        printf("\033[96m");

                        Comments = rand() % 6 + 1;
                        switch (Comments)
                        {
                        case 1:
                            W_Printing("Ah, the sweet sound of poor choices!\n");
                            break;
                        
                        case 2:
                            W_Printing("A brilliant move.\n");
                            break;

                        case 3:
                            W_Printing("Looks like luck is not by your side.\n");
                            break;

                        case 4:
                            W_Printing("Idiot\n");
                            break;

                        case 5:
                            W_Printing("Right on target.\n");
                            break;

                            default:
                            W_Printing("Well, at least you went out with a bang!\n");
                            break;
                        }
                        Lives_Human -= 1;
                        Bullet_Count -= 1; Live_Count -= 1;
                        Exit = 1;

                        Sleep(400);
                        printf("\033[37mHuman Lives Remaining: %d, Comp Lives Remaining: %d", Lives_Human, Lives_Comp);
                        printf("\n\n");

                        break;
                    } // end if

                    // shoot yourself + not loaded
                    else
                    {
                        printf("\033[31mclick\n");
                        PlaySound(TEXT("Sounds/blank.wav"), NULL, SND_FILENAME | SND_SYNC);
                        Sleep(500);
                        printf("\033[96m");

                        Comments = rand() % 6 + 1;
                        switch (Comments)
                        {
                        case 1:
                            W_Printing("Dodged a bullet, literally.\n");
                            break;
                        
                        case 2:
                            W_Printing("Empty chamber? Luck really has low standards.\n");
                            break;

                        case 3:
                            W_Printing("Still breathing, huh? How anticlimactic.\n");
                            break;

                        case 4:
                            W_Printing("Guess you live to make bad decisions another day.\n");
                            break;

                        case 5:
                            W_Printing("Even death does not want you.\n");
                            break;

                        default:
                            W_Printing("Lucky you... for now.\n");
                            break;
                        }
                        printf("\n\n");
                        Bullet_Count -= 1; Blank_Count -= 1;
                        Exit = 0;
                    } // end else
                    break; // end Option case 1

                case 0:
                    // shoot computer + loaded
                    if (Loaded == 1)
                    {
                        printf("\033[31mBANG\n");
                        PlaySound(TEXT("Sounds/live.wav"), NULL, SND_FILENAME | SND_SYNC);
                        Sleep(500);
                        printf("\033[96m");

                        Comments = rand() % 6 + 1;
                        switch (Comments)
                        {
                        case 1:
                            W_Printing("Talk about a self inflicted twist.\n");
                            break;
                        
                        case 2:
                            W_Printing("Guess my luck ran out.\n");
                            break;

                        case 3:
                            W_Printing("Luck, I thought you where on my side.\n");
                            break;

                        case 4:
                            W_Printing("Even I didnot saw that coming.\n");
                            break;

                        case 5:
                            W_Printing("Looks like I might be taking an early retirement.\n");
                            break;

                        default:
                            W_Printing("Oww ! That hurt ?!\n");
                            break;
                        } // end switch comment
                        Bullet_Count -= 1; Live_Count -= 1;
                        Lives_Comp -= 1;
                        Exit = 1;

                        Sleep(400);
                        printf("\033[37mComputer Lives Remaining: %d", Lives_Comp);
                        printf("\n\n");
                        break;
                    } // end if

                    // shot comp + not loaded
                    else
                    {
                        printf("\033[31mclick\n");
                        PlaySound(TEXT("Sounds/blank.wav"), NULL, SND_FILENAME | SND_SYNC);
                        Sleep(500);
                        printf("\033[96m");

                        Comments = rand() % 6 + 1;
                        switch (Comments)
                        {
                            case 1:
                                W_Printing("Phew! Almost wiped myself out there. Close call.\n");
                                break;
                    
                            case 2:
                                W_Printing("Wow, even when I try, I cant get rid of me.\n");
                                break;

                            case 3:
                                W_Printing("And I live to annoy you further more.\n");
                                break;

                            case 4:
                                W_Printing("Guess Im safe… not that I was worried.\n");
                                break;

                            case 5:
                                W_Printing("That wouldve been embarrassing. Lucky me!\n");
                                break;

                            default:
                                W_Printing("Dodged my own bullet. Thats how amazing I am!\n");
                                break;
                        }
                        printf("\n\n");
                        Bullet_Count -= 1; Blank_Count -= 1;
                        Exit = 1;
                        break;
                    } // end else
                    break; // end Option case 0

                default:
                    break;   
            } // end switch Option
        } // end if

        else
        {
            break;
        }

    } // end while
    Result[0] = Bullet_Count;
    Result[1] = Live_Count;
    Result[2] = Blank_Count;
    Result[3] = Lives_Human;
    Result[4] = Lives_Comp;
}

    void Computer(int Bullet_Count, int Live_Count, int Blank_Count, int Lives_Human, int Lives_Comp, int Result[])
{
    int Option;
    int Loaded;
    int size = Bullet_Count;
    int Array[size];
    int Next_Turn = 0;
    int Last[size];
    int OK = 0;
    int Comments;
    int Exit = 0;
    
    printf("\033[32m");
    W_Printing("my turn\n\n");
    
    while (1)
    {
        if (Exit == 1)
        {
            break;
        }
        
        if (Bullet_Count > 0 && Lives_Comp > 0 && Lives_Human > 0)
        {
            Option = rand() % 1;

            // checking the next bullet. 1 if live, 0 if blank.
            if (Live_Count > 0 && Blank_Count > 0)
            {
                Loaded = rand() % 2;
            }
            else if (Live_Count > 0 && Blank_Count <= 0)
            {
                Loaded = 1;
            }
            else if (Live_Count <= 0 && Blank_Count > 0)
            {
                Loaded = 0;
            }
            else
            {
                Exit = 1;
                break;
            }

            switch (Option)
            {
            case 1:
                // shoot human + loaded
                printf("\033[96m");
                W_Printing("Time to decide your fate… one pull at a time.\n");
                Sleep(400);

                if (Loaded == 1)
                {
                    printf("\033[31mBANG\n");
                    PlaySound(TEXT("Sounds/live.wav"), NULL, SND_FILENAME | SND_SYNC);
                    Sleep(400);
                    printf("\033[96m");

                    Comments = rand() % 6 + 1;
                    switch (Comments)
                    {
                    case 1:
                        W_Printing("Oops, did I do that? My bad… not really.\n");
                        break;
                    
                    case 2:
                        W_Printing("Bullseye!\n");
                        break;

                    case 3:
                        W_Printing("I guess I'm a natural\n");
                        break;

                    case 4:
                        W_Printing("You shouldve seen that coming... but you didnt.\n");
                        break;
                    
                    case 5:
                        W_Printing("Id say Im sorry, but Im not a very good liar.\n");
                        break;

                    default:
                        W_Printing("Well, that was fun—for me, anyway.");
                        break;
                    }
                    Lives_Human -= 1;
                    Bullet_Count -= 1; Live_Count -= 1;
                    Exit = 1;

                    Sleep(400);
                    printf("\033[37mHuman Lives Remaining: %d", Lives_Human);
                    printf("\n\n");
                    break;
                } // end if
                
                // shoot human + not loaded
                else
                {
                    printf("\033[31mclick\n");
                    PlaySound(TEXT("Sounds/blank.wav"), NULL, SND_FILENAME | SND_SYNC);
                    Sleep(500);
                    printf("\033[96m");

                    Comments = rand() % 6 + 1;
                    switch (Comments)
                    {
                    case 1:
                        W_Printing("Looks like you live… for now.\n");
                        break;

                    case 2:
                        W_Printing("You got lucky this time. Dont let it go to your head.\n");
                        break;

                    case 3:
                        W_Printing("Empty chamber? How anticlimactic.\n");
                        break;

                    case 4:
                        W_Printing("You dodged a bullet—literally. Impressive.\n");
                        break;

                    case 5:
                        W_Printing("You mightve survived, but youre not winning.\n");
                        break;
                    
                    default:
                        W_Printing("Saved by nothing but sheer dumb luck.\n");
                        break;
                    }
                    printf("\n\n");
                    Bullet_Count -= 1; Blank_Count -= 1;
                    Exit = 1;
                    break;
                }
                break; // end Option case 1
            
            case 0:
                printf("\033[32m");
                W_Printing("Playing with my own life, how thrilling!\n");

                //shoot computer + loaded

                if (Loaded == 1)
                {
                    printf("\033[31mBANG!\n");
                    PlaySound(TEXT("Sounds/live.wav"), NULL, SND_FILENAME | SND_SYNC);
                    Sleep(500);
                    printf("\033[96m");

                    Comments = rand() % 6 + 1;
                    switch (Comments)
                    {
                    case 1:
                        W_Printing("Well, that backfired.\n");
                        break;

                    case 2:
                        W_Printing("Looks like Im taking one for the team. Dramatic, huh?\n");
                        break;

                    case 3:
                        W_Printing("So, this is what regret feels like. Interesting.\n");
                        break;

                    case 4:
                        W_Printing("Well, thats embarrassing... or would be, if I had feelings.\n");
                        break;

                    case 5:
                        W_Printing("Looks like even perfection has its limits.\n");
                        break;
                    
                    default:
                        W_Printing("That wasnt in the script!\n");
                        break;
                    }
                    Bullet_Count -= 1; Live_Count -= 1;
                    Lives_Comp -= 1;
                    Exit = 1;

                    Sleep(400);
                    printf("\033[37mComputer Lives Remaining: %d", Lives_Comp);
                    printf("\n\n");
                    break;
                } // end if
                
                // shoot comp + miss
                else
                {
                    printf("\033[31mclick\n");
                    PlaySound(TEXT("Sounds/blank.wav"), NULL, SND_FILENAME | SND_SYNC);
                    Sleep(500);
                    printf("\033[96m");

                    Comments = rand() % 6 + 1;
                    switch (Comments)
                    {
                    case 1:
                        W_Printing("Phew! Almost wiped myself out there. Close call.\n");
                        break;

                    case 2:
                        W_Printing("Wow, even when I try, I cant get rid of me.\n");
                        break;

                    case 3:
                        W_Printing("And I live to annoy you further more.\n");
                        break;

                    case 4:
                        W_Printing("Guess Im safe… not that I was worried.\n");
                        break;
                    
                    case 5:
                        W_Printing("That wouldve been embarrassing. Lucky me!\n");
                        break;

                    default:
                        W_Printing("Dodged my own bullet.\n");
                        break;
                    }
                    printf("\n\n");
                    Bullet_Count -= 1; Blank_Count -= 1;
                    Exit = 0;

                    Sleep(700);
                }

                break;// end Option case 0
            }
        }
        else
        {
            break;
        }
    }
    Result[0] = Bullet_Count;
    Result[1] = Live_Count;
    Result[2] = Blank_Count;
    Result[3] = Lives_Human;
    Result[4] = Lives_Comp;
} // end Computer

    int main()
{
    srand(time(0));
    
    // declaring
    int Choice;
    int Lives_Human;
    int Lives_Comp;
    int Bullet_Count;
    int Live_Count;
    int Blank_Count;
    int Round = 0;
    int Option;
    int Result[5];
    char Xtra[6969];

    Game_Loading();

    printf("\033[34m"); // changing the text color to red.
    printf(" ,________________________________       \n");
    printf("|__________,----------._ [____]  \"\"-,__  __...-----===""\n");
    printf("        (_(||||||||||||)___________/   \"\"             |\n");
    printf("           `----------' --------[ ))\"-,                |\n");
    printf("                                \"\"    `,  _,--...___  |\n");
    printf("                                         `/           '''\n");
    W_Printing("RUSSIAN ROULETTE\n\n");
    Sleep(500);

    // to create a braek in between the code.
    printf("\033[33mEnter any key(s) to coninue: ");
    scanf("%s", &Xtra);
    printf("\n\n");

    // printing the intro + insrtuctions
    printf("\033[32m");
    W_Printing("Welcome to a game of russian roulette\n");
    Sleep(500);
    W_Printing("This is a game of luck\n");
    Sleep(500);
    W_Printing("and skill if you are smart\n");
    Sleep(500);
    printf("\n");
    Sleep(500);
    W_Printing("INSTRCTIONS:\n");
    Sleep(500);
    W_Printing("* when it is your turn\n");
    Sleep(500);
    W_Printing("* you can either choose to shot \033[31mME \033[32mor \033[34mYOURSELF\033[32m\n");
    Sleep(500);
    W_Printing("* if you shoot \033[31mME\033[32m, your turn would be over,\n");
    Sleep(500);
    W_Printing("* regard less it is a \033[31mlive\033[32m or a \033[34mblank\033[32m\n");
    Sleep(500);
    W_Printing("* if you shoot \033[34mYOURSELF\033[32m, and it is a \033[34mblank\033[32m\n");
    Sleep(500);
    W_Printing("* you would still have your turn\n");
    Sleep(500);
    W_Printing("* but if it is \033[31mlive\033[32m, your turn is over.\n");
    Sleep(500);
    W_Printing("YOUR PURPOSE: survive for as long as possible.\n");
    Sleep(500);
    printf("\n");
    Sleep(500);
    W_Printing("we would start with 6 lives each\n");
    Sleep(500);    
    Lives_Comp = 6; Lives_Human = 6;
    printf("\033[37mHuman Lives: %d. Comp Lives: %d\n\n", Lives_Human, Lives_Comp);
    Sleep(500);

    // main game
    while (1)
    {
        if (Lives_Comp <= 0)
        {
            Option = rand() % 3 + 1;

            printf("\033[96m"); // changing the text color to bright blue.

            switch (Option)
            {
            case 1:
                W_Printing("And just like that, my reign ends in disgrace.\n");
                break;
            
            case 2:
                W_Printing("Ive been bested by a mortal. How tragic.\n");
            
            default:
                W_Printing("So, this is my downfall. I hope youre proud.\n");
                break;
            }
            break;
        } // end if

        else if (Lives_Human <= 0)
        {
            Option = rand() % 3 + 1;

            printf("\033[96m");

            switch (Option)
            {
            case 1:
                W_Printing("Well, that was easy. Too easy, actually.\n");
                break;
            
            case 2:
                W_Printing("Winner, winner, microchip dinner!\n");
            
            default:
                W_Printing("And the winner is… me! Obviously.\n");
                break;
            }
            break;
        } // end elif

        else if (Bullet_Count <= 0)
        {
            printf("\033[37mROUND %d\n", Round+1);
        }
        
        Bullet_Count = 6 + Round;
        Live_Count = rand() % (Bullet_Count - 2) + 1;
        Blank_Count = Bullet_Count - Live_Count;

        printf("\033[37mThere are %d bullets; %d are live and %d are blanks\n\n", Bullet_Count,Live_Count,Blank_Count);
        Sleep(500);
        B_Printing(Live_Count, Blank_Count);

        while (1)
        {
            if (Lives_Comp <= 0 || Lives_Human <= 0 || Bullet_Count <= 0)
            {
                Round++;
                break;
            }

            Human(Bullet_Count, Live_Count, Blank_Count, Lives_Human, Lives_Comp, Result);
            Bullet_Count = Result[0];
            Live_Count = Result[1];
            Blank_Count = Result[2];
            Lives_Human = Result[3];
            Lives_Comp = Result[4];

            // break.
            printf("\033[33mEnter any key(s) to coninue: ");
            scanf("%s", &Xtra);
            printf("\n\n");

            if (Lives_Comp <= 0 || Lives_Human <= 0 || Bullet_Count <= 0)
            {
                Round++;
                break;
            }

            Computer(Bullet_Count, Live_Count, Blank_Count, Lives_Human, Lives_Comp, Result);
            Bullet_Count = Result[0];
            Live_Count = Result[1];
            Blank_Count = Result[2];
            Lives_Human = Result[3];
            Lives_Comp = Result[4];

            // break.
            printf("\033[33mEnter any key(s) to coninue: ");
            scanf("%s", &Xtra);
            printf("\n\n");

        } // end while
    } // end while

    printf("\033[096m");
    W_Printing("Come on, get out of here.");
    printf("\033[037m");
    W_Printing("enter any key to exit: ");
    scanf("%s", &Xtra);
}