#pragma once
#include "raylib.h"
#include "vector"
#include "iostream"
using namespace std;

#define numShoot = 3;
#define numMove = 20;
#define numIdle = 20;

class Human
{
protected:
    int Health;
    int DamageDone;
    int X,Y;
    int Speed;
    int index;
    Texture2D Background;
    vector <Texture2D> Move;
    vector <Texture2D> Shoot;
    vector <Texture2D> Idle;
    
public:
    Human(int H, int D, int sW, int sH);
    virtual void moveUpdate();
    virtual void shootUpdate();
    virtual void idleUpdate();
    virtual void Uploading() = 0;
    int getX();
    int getY();
};

class HumanPistol: public Human
{
public:
    HumanPistol(int H, int D, int sW, int sH);
    void moveUpdate(int index, float direction);
    void shootUpdate(int index, float direction);
    void idleUpdate(int index, float direction);
    void Uploading() override;
    ~HumanPistol();
};