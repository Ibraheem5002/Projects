#include <raylib.h>
#include <iostream>
#include <vector>
#include "Humans.h"
using namespace std;

void StartUp(int FPS)
{
    Image image1 = LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Extras/Ray1.png");
    Texture2D R = LoadTextureFromImage(image1);
    UnloadImage(image1);

    Image image2 = LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Extras/MI.png");
    Texture2D MI = LoadTextureFromImage(image2);
    UnloadImage(image2);

    int Time = 0;
    while (Time < (FPS*3) && !WindowShouldClose() && !IsKeyPressed(KEY_ENTER))
    {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawTexture(R,0,0,RAYWHITE);
        Time++;

        EndDrawing();
    }
    
    Time = 0;
    while (Time < (FPS*3) && !WindowShouldClose() && !IsKeyPressed(KEY_ENTER))
    {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawTexture(MI,0,0,RAYWHITE);
        Time++;

        EndDrawing();
    }

    UnloadTexture(R);
    UnloadTexture(MI);
}

int Menu(int screenWidth, int screenHeight)
{
    int Option = 0;

    Texture2D Menu = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Back/Menu.png"));
    Texture2D Start1 = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Buttons/Start1.png"));
    Texture2D Start2 = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Buttons/Start2.png"));
    Texture2D Instructions1 = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Buttons/Instructions1.png"));
    Texture2D Instructions2 = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Buttons/Instructions2.png"));

    while (!WindowShouldClose())
    {
        if (Option != 0)
        {
            break;
        }

        BeginDrawing();
        ClearBackground(BLACK);

        DrawTexture(Menu,0,0,RAYWHITE);

        if (GetMouseX() >= (screenWidth/2 - 145/2) && GetMouseX() <= (screenWidth/2 + 155/2) && GetMouseY() >= 310 && GetMouseY() <= 400)
        {
            DrawTexture(Start2,screenWidth/2-150/2,screenHeight/2-85/2,RAYWHITE);

            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            {
                Option = 1;
            }
        }
        else
        {
            DrawTexture(Start1,screenWidth/2-155/2,screenHeight/2-84/2,RAYWHITE);
        }

        if (GetMouseX() >= 275 && GetMouseX() <= 525 && GetMouseY() >= 465 && GetMouseY() <= 520)
        {
            DrawTexture(Instructions2,screenWidth/2-252/2,screenHeight/2-90/2+150,RAYWHITE);

            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            {
                Option = 2;
            }
        }
        else
        {
            DrawTexture(Instructions1,screenWidth/2-252/2,screenHeight/2-90/2+150,RAYWHITE);
        }

        EndDrawing();
    }
    
    UnloadTexture(Menu);
    UnloadTexture(Start1);
    UnloadTexture(Start2);
    UnloadTexture(Instructions1);
    UnloadTexture(Instructions2);

    return Option;
}

int Instructions(int screenWidth, int screenHeight)
{
    int Option = 2;

    Texture2D Background = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Back/Instructions.png"));
    Texture2D Back1 = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Buttons/Back1.png"));
    Texture2D Back2 = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Buttons/Back2.png"));

    while (!WindowShouldClose())
    {
        if (Option != 2)
        {
            break;
        }

        BeginDrawing();
        ClearBackground(BLACK);

        DrawTexture(Background,0,0,RAYWHITE);

        if (GetMouseX() >= 338 && GetMouseX() <= 465 && GetMouseY() >= 655 && GetMouseY() <= 725)
        {
            DrawTexture(Back2,screenWidth/2-252/2,700,RAYWHITE);

            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            {
                Option = 0;
            }
        }
        else
        {
            DrawTexture(Back1,screenWidth/2-252/2,700,RAYWHITE);
        }

        EndDrawing();
    }
    
    UnloadTexture(Background);
    UnloadTexture(Back1);
    UnloadTexture(Back2);

    return Option;
}

int Game()
{
    int Option = 1;
    int index = 0;
    const int maxIdle = 20;
    const int maxMove = 20;
    const int maxShoot = 3;
    float direction = 0.0f;

    HumanPistol H(100,5,GetScreenWidth(),GetScreenHeight());
    H.Uploading();

    while (1)
    {
        if (IsKeyPressed(KEY_BACKSPACE))
        {
            Option = 0;
            return Option;
        }

        if (IsKeyDown(KEY_SPACE))
        {
            index++;
            if (index >= maxShoot)
            {
                index = 0;
                cout << "Index: " << index << endl;
            }
            H.shootUpdate(index, direction);
            WaitTime(0.1);
        }
        index = 0;
        
        if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_RIGHT))
        {
            index++;
            if (index >= maxMove)
            {
                index = 0;
                cout << "Index: " << index << endl;
            }

            if (IsKeyDown(KEY_LEFT) && IsKeyDown(KEY_UP))
            {
                direction = 225.0f;
            }
            else if (IsKeyDown(KEY_LEFT) && IsKeyDown(KEY_DOWN))
            {
                direction = 135.0f;
            }
            else if (IsKeyDown(KEY_RIGHT) && IsKeyDown(KEY_UP))
            {
                direction = 315.0f;
            }
            else if (IsKeyDown(KEY_RIGHT) && IsKeyDown(KEY_DOWN))
            {
                direction = 45.0f;
            }
            else if (IsKeyDown(KEY_UP))
            {
                direction = 270.0f;
            }
            else if (IsKeyDown(KEY_RIGHT))
            {
                direction = 0.0f;
            }
            else if (IsKeyDown(KEY_DOWN))
            {
                direction = 90.0f;
            }
            else
            {
                direction = 180.0f;
            }

            H.moveUpdate(index, direction);
            WaitTime(0.1);
        }
        index = 0;

        if (!(IsKeyDown(KEY_UP) && IsKeyDown(KEY_DOWN) && IsKeyDown(KEY_LEFT) && IsKeyDown(KEY_RIGHT) && IsKeyDown(KEY_SPACE)))
        {
            index++;
            if (index >= maxIdle)
            {
                index = 0;
                cout << "Index: " << index << endl;
            }
            H.idleUpdate(index, direction);
            WaitTime(0.1);
        }
        index = 0;
        
        H.~HumanPistol();
    }
}

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 800;
    const int FPS = 30;
    int Option = 0;

    InitWindow(screenWidth,screenHeight,"Zombie Shooter");
    SetTargetFPS(FPS);

    StartUp(FPS);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        if (Option == 0)
        {
            Option = Menu(screenWidth,screenHeight);
        }
        else if (Option == 2)
        {
            Option = Instructions(screenWidth,screenHeight);
        }
        else if (Option == 1)
        {
            Option = Game();
        }
        EndDrawing();
    }
    

    CloseWindow();
}