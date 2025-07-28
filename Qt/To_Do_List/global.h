#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>

class global
{
public:
    global();

    QString Username;
    void setUname(QString N);
    QString getUname();
};

extern global G;

#endif // GLOBAL_H
