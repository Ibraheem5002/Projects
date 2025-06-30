#include <iostream>
using namespace std;

template <typename T>
void OUT(T DataIn)
{
    cout << DataIn;
}

template <typename T, typename U>
void OUT(T Data1, U Data2)
{
    cout << Data1;
    cout << Data2;
}

template <typename T, typename U, typename V>
void OUT(T Data1, U Data2, V Data3)
{
    cout << Data1;
    cout << Data2;
    cout << Data3;
}