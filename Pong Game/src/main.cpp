#include <raylib.h>
#include <iostream>
#include "C:\Users\Hajra Hai\Desktop\Pong Game\resource.rc"
using namespace std;

class Ball
{
public:
    float X, Y;
    int speedX, speedY;
    int radius;
    
    void Draw()
    {
        DrawCircle(X, Y, radius, Color {175,175,175,255});
    }

    void Update()
    {
        X += speedX;
        Y += speedY;

        if (Y+radius >= GetScreenHeight() || Y-radius <= 0)
        {
            speedY *= -1;
        }
        if (X+radius >= GetScreenWidth() || X-radius <= 0)
        {
            speedX *= -1;
        }
    }
};

class Paddle
{
public:
    int X, Y;
    int speed;
    int width, height;

    void Draw()
    {
        DrawRectangle(X, Y, width, height, WHITE);
    }

    void Update()
    {
        if (IsKeyDown(KEY_UP) && Y > 0)
        {
            Y = Y - speed;
        }
        else if (IsKeyDown(KEY_DOWN) && Y < GetScreenHeight() - height)
        {
            Y = Y + speed;
        }
        else if (IsKeyDown(KEY_RIGHT) && X < GetScreenWidth() / 2 - width)
        {
            X = X + speed;
        }
        else if (IsKeyDown(KEY_LEFT) && X > 0)
        {
            X = X - speed;
        }
    }
};

class P2Paddle: public Paddle
{
public:
    void Draw()
    {
        DrawRectangle(X, Y, width, height, BLACK);
    }
 
    void Update()
    {
        if (IsKeyDown(KEY_W) && Y > 0)
        {
            Y = Y - speed;
        }
        else if (IsKeyDown(KEY_S) && Y < GetScreenHeight() - height)
        {
            Y = Y + speed;
        }
        else if (IsKeyDown(KEY_D) && X < GetScreenWidth() / 2 - width)
        {
            X = X + speed;
        }
        else if (IsKeyDown(KEY_A) && X > 0)
        {
            X = X - speed;
        }
    }
};

class CpuPaddle: public Paddle
{
public:
    void Draw()
    {
        DrawRectangle(X, Y, width, height, BLACK);
    }

    void Update(int ballX, int ballY)
    {
        if ((Y + height/2) > ballY && Y > 0)
        {
            Y = Y - speed;
        }
        else if ((Y + height/2) <= ballY && Y < GetScreenHeight() - height)
        {
            Y = Y + speed;
        }
    }
};

int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    // Starting the Game

    // Initializing all the variables
    // int Mode;

    // Initializing Window Screen
    InitWindow(screenWidth, screenHeight, "Game Name");
    SetTargetFPS(60);

    // Initializing Audio
    InitAudioDevice();
    Sound Ball_Hit_Wall = LoadSound("C:/Users/Hajra Hai/Desktop/Pong Game/src/Audios/Ball_Hitting_Wall.wav");
    Sound Ball_Hit_Pluck = LoadSound("C:/Users/Hajra Hai/Desktop/Pong Game/src/Audios/Ball_Hitting_Pluck.wav");
    Sound Win = LoadSound("C:/Users/Hajra Hai/Desktop/Pong Game/src/Audios/Win.wav");
    Sound Lose = LoadSound("C:/Users/Hajra Hai/Desktop/Pong Game/src/Audios/Lose.wav");
    Sound Select = LoadSound("C:/Users/Hajra Hai/Desktop/Pong Game/src/Audios/Select.wav");

    // Initializing Pictures
    Image image2 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/menu.png");
    Texture2D menu_screen = LoadTextureFromImage(image2);
    UnloadImage(image2);

    Image image = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/raylib.png");
    Texture2D Raylib = LoadTextureFromImage(image);
    UnloadImage(image);

    Image image1 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/mi.png");
    Texture2D MI = LoadTextureFromImage(image1);
    UnloadImage(image1);

    Image image3 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/how_to.png");
    Texture2D How_To = LoadTextureFromImage(image3);
    UnloadImage(image3);

    Image image4 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/start1.png");
    Texture2D Start1 = LoadTextureFromImage(image4);
    UnloadImage(image4);

    Image image5 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/start2.png");
    Texture2D Start2 = LoadTextureFromImage(image5);
    UnloadImage(image5);

    Image image6 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/how1.png");
    Texture2D How1 = LoadTextureFromImage(image6);
    UnloadImage(image6);

    Image image7 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/how2.png");
    Texture2D How2 = LoadTextureFromImage(image7);
    UnloadImage(image7);

    Image image8 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/back1.png");
    Texture2D Back1 = LoadTextureFromImage(image8);
    UnloadImage(image8);

    Image image9 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/back2.png");
    Texture2D Back2 = LoadTextureFromImage(image9);
    UnloadImage(image9);

    Image image10 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/menu1.png");
    Texture2D Menu1 = LoadTextureFromImage(image10);
    UnloadImage(image10);
    
    Image image11 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/menu2.png");
    Texture2D Menu2 = LoadTextureFromImage(image11);
    UnloadImage(image11);

    Image image12 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/p1.png");
    Texture2D P1_W = LoadTextureFromImage(image12);
    UnloadImage(image12);

    Image image13 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/p2.png");
    Texture2D P2_W = LoadTextureFromImage(image13);
    UnloadImage(image13);

    Image image14 = LoadImage("C:/Users/Hajra Hai/Desktop/Pong Game/src/Images/comp.png");
    Texture2D C_W = LoadTextureFromImage(image14);
    UnloadImage(image14);

    // Variables
    int Time = 0;
    int Option = 0;

    // Game Loop

    // [0-Title.1-MENU.2-Instructions.3-Selection.4-1P.5-2P.6-P1Win.7-CompWin.8.P2Win]
    while (!WindowShouldClose())
    {
        // TItle screen
        if (Option == 0)
        {
            while (Time < (60*5) &&!WindowShouldClose() && !IsKeyDown(KEY_ENTER))
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(Raylib,0,0,RAYWHITE);

                EndDrawing();

                Time++;
            }

            WaitTime(1);
            
            Time = 0;
            while (Time < (60*5) &&!WindowShouldClose() && !IsKeyDown(KEY_ENTER))
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(MI,0,0,RAYWHITE);

                EndDrawing();

                Time++;
            }
            
            Option = 1;
        } // end option 0 if
        
        // menu screen
        else if (Option == 1)
        {
            while (!WindowShouldClose())
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(menu_screen,0,0,RAYWHITE);

                DrawTexture(Start1, (screenWidth/2 - 252/2), (screenHeight/2 - 90/2),RAYWHITE);

                DrawTexture(How1, (screenWidth/2 - 252/2), (screenHeight/2 - 90/2 + 110),RAYWHITE);

                // Start Button
                if (GetMouseX() >= (screenWidth/2 - 252/2) && GetMouseX() <= (screenWidth/2 + 252/2) && GetMouseY() >= (screenHeight/2 - 90/2) && GetMouseY() <= (screenHeight/2 + 90/2))
                {
                    DrawTexture(Start2, (screenWidth/2 - 252/2), (screenHeight/2 - 90/2),RAYWHITE);

                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                    {
                        Option = 3;
                        PlaySound(Select);
                        break;
                    }
                }
                
                // How to button
                if (GetMouseX() >= (screenWidth/2 - 252/2) && GetMouseX() <= (screenWidth/2 + 252/2) && GetMouseY() >= (screenHeight/2 - 90/2 + 110) && GetMouseY() <= (screenHeight/2 + 90/2 + 110 + 90))
                {
                    DrawTexture(How2, (screenWidth/2 - 252/2), (screenHeight/2 - 90/2 + 110),RAYWHITE);

                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                    {
                        Option = 2;
                        PlaySound(Select);
                        break;
                    } 
                }
                
                EndDrawing();
            } // end while loop
        } // end option 1 if

        // how to screens
        else if (Option == 2)
        {
            while (!WindowShouldClose())
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(How_To,0,0,RAYWHITE);

                DrawTexture(Back1, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                if (GetMouseX() >= (screenWidth / 2 - 252 / 2) && GetMouseX() <= (screenWidth / 2 + 252 / 2) && GetMouseY() >= (screenHeight - 100) && GetMouseY() <= (screenHeight + 100))
                {
                    DrawTexture(Back2, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                    {
                        Option = 1;
                        PlaySound(Select);
                        break;
                    }
                }
                EndDrawing();
            } // end while
        } // end option 2 if

        // mode selections screen
        else if (Option == 3)
        {
            while (!WindowShouldClose())
            {
                // Drawing
                BeginDrawing();

                // Drawing the selection screen
                
                if (GetMouseX() < screenWidth/2)
                {
                    DrawRectangle(0,0,screenWidth/2,screenHeight,Color { 245, 100, 110, 255 });
                    DrawRectangle(screenWidth/2,0,screenWidth,screenHeight,BLUE);
                }
                else
                {
                    DrawRectangle(0,0,screenWidth/2,screenHeight,RED);
                    DrawRectangle(screenWidth/2,0,screenWidth,screenHeight,Color { 102, 171, 255, 255 });
                }
                
                DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
                DrawLine(screenWidth / 2 - 1, 0, screenWidth / 2 - 1, screenHeight, WHITE);
                DrawLine(screenWidth / 2 + 1, 0, screenWidth / 2 + 1, screenHeight, WHITE);
                DrawLine(screenWidth / 2 - 2, 0, screenWidth / 2 - 2, screenHeight, WHITE);
                DrawLine(screenWidth / 2 + 2, 0, screenWidth / 2 + 2, screenHeight, WHITE);

                // Drawing the Selections
                const char *Text1 = "1 Player";
                const char *Text2 = "2 Players";


                int T1width = MeasureText(Text1,100);
                int T2width = MeasureText(Text2,100);

                DrawText(Text1,(screenWidth/4 - T1width/2),(screenHeight/2 - 50),100,BLACK);
                DrawText(Text2,(screenWidth/4 - T2width/2 + 640),(screenHeight/2 - 50),100,BLACK);

                EndDrawing();

                // Event Handeling
                if (GetMouseX() < screenWidth/2 && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                {
                    Option = 4;
                    PlaySound(Select);
                    break;
                }
                else if (GetMouseX() > screenWidth/2 && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                {
                    Option = 5;
                    PlaySound(Select);
                    break;
                }
            } // end while
        } // end option 3 if

        else if (Option == 4 || Option == 5)
        {
            // Initializing Vairables
            int P_Score = 0;
            int C_Score = 0;
            int i = 1;

            // Ball Object
            Ball ball;
            ball.X = screenWidth / 2;
            ball.Y = screenHeight / 2;
            ball.speedX = 6;
            ball.speedY = 6;
            ball.radius = 25;

            // Player 1 Paddle Object
            Paddle Player;
            Player.width = 25;
            Player.height = 120;
            Player.X = 10;
            Player.Y = screenHeight / 2 - 60;
            Player.speed = 6;

            // Player 2 Paddle Object
            P2Paddle P2;
            P2.width = 25;
            P2.height = 120;
            P2.X = screenWidth - (10 + P2.width);
            P2.Y = screenHeight / 2 - 60;
            P2.speed = 6;

            // CPU Paddle Object
            CpuPaddle CPU;
            CPU.width = 25;
            CPU.height = 120;
            CPU.X = screenWidth - (10 + 25);
            CPU.Y = screenHeight / 2 - 60;
            CPU.speed = 6;

            if (Option == 4)
            {
                while (!WindowShouldClose())
                {
                    i++;
                    // Update
                    ball.Update();
                    Player.Update();
                    CPU.Update(ball.X,ball.Y);

                    // Checking for collisions
                    if (CheckCollisionCircleRec(Vector2{ball.X,ball.Y}, ball.radius, Rectangle{(float)Player.X,(float)Player.Y,(float)Player.width,(float)Player.height}))
                    {
                        ball.speedX *= -1;
                        PlaySound(Ball_Hit_Pluck);
                    }
                    if (CheckCollisionCircleRec(Vector2{ball.X,ball.Y}, ball.radius, Rectangle{(float)CPU.X,(float)CPU.Y,(float)CPU.width,(float)CPU.height}))
                    {
                        ball.speedX *= -1;
                        PlaySound(Ball_Hit_Pluck);
                    }

                    // Checking For Scores
                    if (ball.X - ball.radius <= 0)
                    {
                        C_Score++;
                        ball.X = screenWidth / 2;
                        ball.Y = screenHeight / 2;
                        PlaySound(Lose);
                        
                        if (ball.speedX > 0)
                        {
                            ball.speedX = 6; ball.speedY = 6;
                        }
                        else
                        {
                            ball.speedX = -6; ball.speedY = 6;
                        }
                        ball.speedX *= -1;
                    }

                    if (ball.X + ball.radius >= screenWidth)
                    {
                        P_Score++;
                        ball.X = screenWidth / 2;
                        ball.Y = screenHeight / 2;
                        PlaySound(Win);
                        
                        if (ball.speedX > 0)
                        {
                            ball.speedX = 6; ball.speedY = 6;
                        }
                        else
                        {
                            ball.speedX = -6; ball.speedY = 6;
                        }
                        ball.speedX *= -1;
                    }

                    if (ball.X+ball.radius <= 0 || ball.X+ball.radius >= screenWidth)
                    {
                        PlaySound(Ball_Hit_Wall);
                    }
                    if (ball.Y-ball.radius <= 0 || ball.Y+ball.radius >= screenHeight)
                    {
                        PlaySound(Ball_Hit_Wall);
                    }
                    
                    // Drawing
                    BeginDrawing();
                    ClearBackground(BLACK);

                    // Making the ground
                    DrawRectangle(0,0,screenWidth/2,screenHeight,RED);
                    DrawRectangle(screenWidth/2,0,screenWidth,screenHeight,BLUE);

                    DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 - 1, 0, screenWidth / 2 - 1, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 + 1, 0, screenWidth / 2 + 1, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 - 2, 0, screenWidth / 2 - 2, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 + 2, 0, screenWidth / 2 + 2, screenHeight, WHITE);

                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 123, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 124, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 125, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 126, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 127, WHITE);

                    ball.Draw();
                    Player.Draw();
                    CPU.Draw();

                    DrawText(TextFormat("%i", P_Score), (screenWidth/2 - 50),20,50,WHITE);
                    DrawText(TextFormat("%i", C_Score), (screenWidth/2 + 20),20,50,WHITE);

                    // Changing the Speed
                    if (i % 300 == 0 && ball.speedX > 0)
                    {
                        ball.speedX++;
                        ball.speedY++;
                    }     
                    else if (i % 300 == 0 && ball.speedX < 0)
                    {
                        ball.speedX--;
                        ball.speedY++;
                    }
                    // DrawText(TextFormat("%i", ball.speedX), 1200,700,25,GREEN);

                    if (P_Score >= 5)
                    {
                        Option = 6;
                        break;
                    }
                    if (C_Score >= 5)
                    {
                        Option = 7;
                        break;
                    }

                    EndDrawing();
                } // end while
            } // end if option 4

            else if (Option == 5)
            {
                while (!WindowShouldClose())
                {                
                    i++;
                    // Update
                    ball.Update();
                    Player.Update();
                    P2.Update();

                    // Checking for collisions
                    if (CheckCollisionCircleRec(Vector2{ball.X,ball.Y}, ball.radius, Rectangle{(float)Player.X,(float)Player.Y,(float)Player.width,(float)Player.height}))
                    {
                        ball.speedX *= -1;
                        PlaySound(Ball_Hit_Pluck);
                    }
                    if (CheckCollisionCircleRec(Vector2{ball.X,ball.Y}, ball.radius, Rectangle{(float)P2.X,(float)P2.Y,(float)P2.width,(float)P2.height}))
                    {
                        ball.speedX *= -1;
                        PlaySound(Ball_Hit_Pluck);
                    }

                    // Checking For Scores
                    if (ball.X - ball.radius <= 0)
                    {
                        C_Score++;
                        ball.X = screenWidth / 2;
                        ball.Y = screenHeight / 2;
                        PlaySound(Lose);
                        
                        if (ball.speedX > 0)
                        {
                            ball.speedX = 6; ball.speedY = 6;
                        }
                        else
                        {
                            ball.speedX = -6; ball.speedY = 6;
                        }
                        ball.speedX *= -1;
                    }

                    if (ball.X + ball.radius >= screenWidth)
                    {
                        P_Score++;
                        ball.X = screenWidth / 2;
                        ball.Y = screenHeight / 2;
                        PlaySound(Win);

                        if (ball.speedX > 0)
                        {
                            ball.speedX = 6; ball.speedY = 6;
                        }
                        else
                        {
                            ball.speedX = -6; ball.speedY = 6;
                        }
                        ball.speedX *= -1;
                    }

                    if (ball.X+ball.radius <= 0 || ball.X+ball.radius >= screenWidth)
                    {
                        PlaySound(Ball_Hit_Wall);
                    }
                    if (ball.Y-ball.radius <= 0 || ball.Y+ball.radius >= screenHeight)
                    {
                        PlaySound(Ball_Hit_Wall);
                    }       
                    
                    // Drawing
                    BeginDrawing();

                    // Making the ground
                    DrawRectangle(0,0,screenWidth/2,screenHeight,RED);
                    DrawRectangle(screenWidth/2,0,screenWidth,screenHeight,BLUE);

                    DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 - 1, 0, screenWidth / 2 - 1, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 + 1, 0, screenWidth / 2 + 1, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 - 2, 0, screenWidth / 2 - 2, screenHeight, WHITE);
                    DrawLine(screenWidth / 2 + 2, 0, screenWidth / 2 + 2, screenHeight, WHITE);

                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 123, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 124, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 125, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 126, WHITE);
                    DrawCircleLines(screenWidth / 2, screenHeight / 2, 127, WHITE);

                    ball.Draw();
                    Player.Draw();
                    P2.Draw();

                    DrawText(TextFormat("%i", P_Score), (screenWidth/2 - 50),20,50,WHITE);
                    DrawText(TextFormat("%i", C_Score), (screenWidth/2 + 20),20,50,WHITE);

                    // Changing the Speed
                    if (i % 300 == 0 && ball.speedX > 0)
                    {
                        ball.speedX++;
                        ball.speedY++;
                    }     
                    else if (i % 300 == 0 && ball.speedX < 0)
                    {
                        ball.speedX--;
                        ball.speedY++;
                    }

                    if (P_Score >= 5)
                    {
                        Option = 6;
                        break;
                    }
                    if (C_Score >= 5)
                    {
                        Option = 8;
                        break;
                    }
                    
                    EndDrawing();
                } // end while
            } // end if option 5            
        } // end if option 4 or 5

        else if (Option == 6)
        {
            while (!WindowShouldClose())
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(P1_W,0,0,RAYWHITE);

                DrawTexture(Menu1, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                if (GetMouseX() >= (screenWidth / 2 - 252 / 2) && GetMouseX() <= (screenWidth / 2 + 252 / 2) && GetMouseY() >= (screenHeight - 100) && GetMouseY() <= (screenHeight + 100))
                {
                    DrawTexture(Menu2, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                    {
                        Option = 1;
                        PlaySound(Select);
                        break;
                    }
                }
                EndDrawing();
            }
        } // end option 6 if

        else if (Option == 7)
        {
            while (!WindowShouldClose())
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(C_W,0,0,RAYWHITE);

                DrawTexture(Menu1, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                if (GetMouseX() >= (screenWidth / 2 - 252 / 2) && GetMouseX() <= (screenWidth / 2 + 252 / 2) && GetMouseY() >= (screenHeight - 100) && GetMouseY() <= (screenHeight + 100))
                {
                    DrawTexture(Menu2, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                    {
                        Option = 1;
                        PlaySound(Select);
                        break;
                    }
                }
                EndDrawing();
            }
        } // end option 7 if
        
        else if (Option == 8)
        {
            while (!WindowShouldClose())
            {
                BeginDrawing();
                ClearBackground(RAYWHITE);

                DrawTexture(P2_W,0,0,RAYWHITE);

                DrawTexture(Menu1, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                if (GetMouseX() >= (screenWidth / 2 - 252 / 2) && GetMouseX() <= (screenWidth / 2 + 252 / 2) && GetMouseY() >= (screenHeight - 100) && GetMouseY() <= (screenHeight + 100))
                {
                    DrawTexture(Menu2, (screenWidth / 2 - 252 / 2), screenHeight - 100, RAYWHITE);

                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                    {
                        Option = 1;
                        PlaySound(Select);
                        break;
                    }
                }
                EndDrawing();
            }
        } // end option 8 if
    } // end game loop
} // end main