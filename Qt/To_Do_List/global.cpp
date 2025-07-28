#include "global.h"

global::global()
{
    Username = "";
}

void global::setUname(QString N)
{
    Username = N;
}

QString global::getUname()
{
    return Username;
}

global G;
