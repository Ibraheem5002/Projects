#define Start {
#define End }
#define St {
#define Ed }

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector <string> VarName;
vector <string> VarValue;

template <typename T>
void DATA_IN(const string Name, T &Var)
{
    bool VarFound = 0;
    int count = VarName.size();

    for (int i = 0; i < count; i++)
    {
        if (VarName[i] == Name)
        {
            cin >> Var;
            cin.ignore();
            VarValue[i] = to_string(Var);
            VarFound = 1;
        }
    }
    if (VarFound == 0)
    {
        VarName.push_back(Name);
        cin >> Var;
        cin.ignore();
        VarValue.push_back(to_string(Var));
    }
}

void DATA_IN(const string Name, string &Var)
{
    bool VarFound = 0;
    int count = VarName.size();

    for (int i = 0; i < count; i++)
    {
        if (VarName[i] == Name)
        {
            getline(cin,Var);
            VarValue[i] = Var;
            VarFound = 1;
        }
    }
    if (VarFound == 0)
    {
        VarName.push_back(Name);
        getline(cin,Var);
        VarValue.push_back(Var);
    }
}

void DATA_DELETE(const string Name)
{
    int count = VarName.size();
    bool isFound = 0;

    for (int i = 0; i < count; i++)
    {
        if (VarName[i] == Name)
        {
            VarName.erase(VarName.begin() + i);
            VarValue.erase(VarValue.begin() + i);
            isFound = 1;
        }
    }

    if (isFound == 0)
    {
        cout << "Variable: " << Name << " not found." << endl;
    }
}

int GET_DATA_INDEX(const string Name)
{
    int count = VarName.size();

    for (int i = 0; i < count; i++)
    {
        if (VarName[i] == Name)
        {
            return i;
        }
    }
}

template <typename T>
void MESSAGE(T M)
{
    cout << M;
}

bool CONDITION(bool X)
{
    return X;
}

void LOOP(bool X)
{
    while (1)
    {
        if (X == 0)
        {
            break;
        }
    }
}