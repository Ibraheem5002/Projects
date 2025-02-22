#include <raylib.h>
#include <iostream>
using namespace std;

class Ball
{
public:
    float X, Y;
    int speedX, speedY;
    int radius;
    
    void Draw()
    {
        DrawCircle(X, Y, radius, WHITE);
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

int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    // Starting the Game
    cout << "Starting the Game" << endl;
    InitWindow(screenWidth, screenHeight, "Game Name");
    SetTargetFPS(60);

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

    // Player Paddle Object
    Paddle Player;
    Player.width = 25;
    Player.height = 120;
    Player.X = 10;
    Player.Y = screenHeight / 2 - 60;
    Player.speed = 6;

    P2Paddle P2;
    P2.width = 25;
    P2.height = 120;
    P2.X = screenWidth - (10 + P2.width);
    P2.Y = screenHeight / 2 - 60;
    P2.speed = 6;

    // Game Loop
    while  (!WindowShouldClose())
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
        }
        if (CheckCollisionCircleRec(Vector2{ball.X,ball.Y}, ball.radius, Rectangle{(float)P2.X,(float)P2.Y,(float)P2.width,(float)P2.height}))
        {
            ball.speedX *= -1;
        }

        // Checking For Scores
        if (ball.X - ball.radius <= 0)
        {
            C_Score++;
            ball.X = screenWidth / 2;
            ball.Y = screenHeight / 2;
            
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
        P2.Draw();

        DrawText(TextFormat("%i", P_Score), 20,20,50,WHITE);
        DrawText(TextFormat("%i", C_Score), screenWidth-50,20,50,WHITE);

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

        EndDrawing();
    }

    // Closing the Game
    CloseWindow();
    return 0;
}