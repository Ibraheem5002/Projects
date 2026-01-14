#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T ADD(T Num1, T Num2)
{
    return Num1 + Num2;
}
string ADD(string Num1, string Num2)
{
    string Num3;
    Num3 = Num1 + " " + Num2;
    return Num3;
}

template <typename T>
T SUBTRACT(T Num1, T Num2)
{
    return Num1 - Num2;
}

template <typename T>
T MULTIPLY(T Num1, T Num2)
{
    return Num1 * Num2;
}

template <typename T>
T DIVIDE(T Num1, T Num2)
{
    if (Num2 == 0)
    {
        cout << "Error, number out of bounds" << endl;
        return 0;
    }
    else
    {
        return Num1 / Num2;
    }
}

template <typename T>
T MOD(T Num1, T Num2)
{
    return Num1 % Num2;
}

template <typename T>
bool GREAT(T Num1, T Num2)
{
    if (Num1 > Num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
bool LESS(T Num1, T Num2)
{
    if (Num1 < Num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
bool EQUAL(T Num1, T Num2)
{
    if (Num1 == Num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
bool NOT_EQUAL(T Num1, T Num2)
{
    if (Num1 != Num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
bool GREAT_EQUAL(T Num1, T Num2)
{
    if (Num1 >= Num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
bool LESS_EQUAL(T Num1, T Num2)
{
    if (Num1 <= Num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <typename T>
T EVALUATE(const char* Input)
{
    vector <string> Character;
    int count = strlen(Input);

    double Result = 0;
    double temp1, temp2;

    for (int i = 0; i < count; i++)
    {
        int Numb = 0;
        string temp = "";
        for (int j = i; j < count; j++)
        {
            if (Input[j] == ' ')
            {
                break;
            }
            Numb++;
            temp += Input[j];
        }
        Character.push_back(temp);
        i += Numb-1;
    }

    count = Character.size();

    int openBracket = -1, closeBracket = -1;
    for (int i = 0; i < count; i++)
    {
        if (Character[i] == "{")
        {
            for (int j = i; j < count; j++)
            {
                if (Character[j] == "[")
                {
                    for (int k = j; k < count; k++)
                    {
                        if (Character[k] == "(")
                        {
                            for (int l = k; l < count; l++)
                            {
                                vector <int> operationDone;
                                if (Character[l] == "/")
                                {
                                    temp1 = stod(Character[l-1]);
                                    temp2 = stod(Character[l+1]);
                                    operationDone.push_back(l);

                                    Result += (temp1/temp2);
                                }
                                
                            }
                        }
                    }
                    
                }
            }
        }
    }
}