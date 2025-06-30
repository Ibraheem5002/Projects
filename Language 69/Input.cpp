#include <iostream>
using namespace std;

#define Num int
#define Num double
#define Num float
#define Txt string
#define Char char
#define Bool bool

template <typename T>
T& IN(T &Variable)
{
    T DataIn;
    cin >> DataIn;
    cin.ignore();
    Variable = DataIn;
    return Variable;
}

template <>
string& IN<string>(string &Variable)
{
    string DataIn;
    getline(cin,DataIn);
    Variable = DataIn;
    return Variable;
}

template<>
bool& IN<bool>(bool &Var)
{
    string DataIn;
    getline(cin,DataIn);

    if (DataIn == "true" || DataIn == "1" || DataIn == "T" || DataIn == "TRUE")
    {
        Var = 1;
    }
    else
    {
        Var = 0;
    }

    return Var;
}