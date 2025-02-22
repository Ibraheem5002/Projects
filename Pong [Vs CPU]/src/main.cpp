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

class CpuPaddle: public Paddle
{
public:
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

    // CPU Paddle Object
    CpuPaddle CPU;
    CPU.width = 25;
    CPU.height = 120;
    CPU.X = screenWidth - (10 + 25);
    CPU.Y = screenHeight / 2 - 60;
    CPU.speed = 6;

    // Game Loop
    while  (!WindowShouldClose())
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
        }
        if (CheckCollisionCircleRec(Vector2{ball.X,ball.Y}, ball.radius, Rectangle{(float)CPU.X,(float)CPU.Y,(float)CPU.width,(float)CPU.height}))
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
        CPU.Draw();

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