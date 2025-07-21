#include "Humans.h"
using namespace std;

// Human
Human::Human(int H, int D, int sW, int sH): Health(H),DamageDone(D),X(sW/2),Y(sH/2),Speed(5) {}

int Human::getX() { return X; }
int Human::getY() { return Y; }
void Human::idleUpdate() {}
void Human::moveUpdate() {}
void Human::shootUpdate() {}
void Human::Uploading() {}

// Human Pistol
HumanPistol::HumanPistol(int H, int D, int sW, int sH): Human(H,D,sW,sH) {}

void HumanPistol::Uploading()
{
    string Path;

    for (int i = 0; i < 20; i++)
    {
        Path = "C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Human/Pistol/move/" + to_string(i+1) + ".png";
        Move.push_back(
            LoadTextureFromImage (LoadImage(Path.c_str()))
        );
    }

    for (int i = 0; i < 20; i++)
    {
        Path = "C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Human/Pistol/idle/" + to_string(i+1) + ".png";
        Idle.push_back(
            LoadTextureFromImage (LoadImage(Path.c_str()))
        );
    }
    
    for (int i = 0; i < 3; i++)
    {
        Path = "C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Human/Pistol/shoot/" + to_string(i+1) + ".png";
        Shoot.push_back(
            LoadTextureFromImage (LoadImage(Path.c_str()))
        );
    }

    Background = LoadTextureFromImage(LoadImage("C:/Users/Hajra Hai/Desktop/Zombie_Shooter/src/images/Back/Background.png"));
}

void HumanPistol::moveUpdate(int index, float direction)
{
    float width = (float)Move[index].width;
    float height = (float)Move[index].height;
    float scale = 0.5f;

    Rectangle source = { 0,0,width,height };
    Rectangle dest = { (float)X, (float)Y, width*scale, height*scale};
    Vector2 origin { dest.width/2,dest.height/2 };

    if (IsKeyDown(KEY_LEFT) && IsKeyDown(KEY_UP))
    {
        X -= Speed;
        Y -= Speed;
    }
    else if (IsKeyDown(KEY_LEFT) && IsKeyDown(KEY_DOWN))
    {
        X -= Speed;
        Y += Speed;
    }
    else if (IsKeyDown(KEY_RIGHT) && IsKeyDown(KEY_UP))
    {
        X += Speed;
        Y -= Speed;
    }
    else if (IsKeyDown(KEY_RIGHT) && IsKeyDown(KEY_DOWN))
    {
        X += Speed;
        Y += Speed;
    }
    else if (IsKeyDown(KEY_RIGHT))
    {
        X += Speed;
    }
    else if (IsKeyDown(KEY_UP))
    {
        Y -= Speed;
    }
    else if (IsKeyDown(KEY_DOWN))
    {
        Y += Speed;
    }
    else
    {
        X -= Speed;
    }

    ClearBackground(BLACK);

    DrawTexture(Background,0,0,RAYWHITE);
    DrawTexturePro(Move[index],source,dest,origin,direction,RAYWHITE);
}

void HumanPistol::shootUpdate(int index, float direction)
{
    BeginDrawing();
    ClearBackground(BLACK);

    DrawTexture(Background,0,0,RAYWHITE);
    DrawTextureEx(Shoot[index],{ (float)X, (float)Y }, direction, 0.5f,RAYWHITE);

    EndDrawing();
}

void HumanPistol::idleUpdate(int index, float direction)
{
    BeginDrawing();
    ClearBackground(BLACK);

    DrawTexture(Background,0,0,RAYWHITE);
    DrawTextureEx(Idle[index],{ (float)X, (float)Y }, direction, 0.5f,RAYWHITE);

    EndDrawing();
}

HumanPistol::~HumanPistol()
{
    // for (size_t i = 0; i < Move.size(); i++)
    // {
    //     UnloadTexture(Move[i]);
    // }
    // for (size_t i = 0; i < Shoot.size(); i++)
    // {
    //     UnloadTexture(Shoot[i]);
    // }
    // for (size_t i = 0; i < Idle.size(); i++)
    // {
    //     UnloadTexture(Idle[i]);
    // }
    
}