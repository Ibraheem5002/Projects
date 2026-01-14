#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void func(string Text);

void outVectorArray(const vector <string> Array);

int main()
{
    string In;

    cout << "Enter your text: ";
    getline(cin,In);

    func(In);

    cout << endl << endl;
    cout << "Enter any key to exit:\n";
    cin >> In;
}

void func(string Text)
{
    vector <char> lowerChar, upperChar;
    vector <string> finalOut;
    bool isLower;
    bool isChar;

    for (char i = 'a'; i <= 'z'; i++)
    {
        lowerChar.push_back(i);
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        upperChar.push_back(i);
    }

    for (int i = 0; i < Text.size(); i++)
    {
        isChar = isalpha(Text[i]);

        if (isChar == 0)
        {
            outVectorArray(finalOut);
            
            cout << Text[i];

            finalOut.push_back(string(1,Text[i]));
        }
        else
        {
            isLower = islower(Text[i]);
            
            if (isLower == 1)
            {
                for (int j = 0; j < lowerChar.size(); j++)
                {
                    outVectorArray(finalOut);
                    cout << lowerChar[j];

                    if (Text[i] == lowerChar[j])
                    {
                        finalOut.push_back(string(1,lowerChar[j]));
                        break;
                    }
                    cout << endl;
                }
            }
            else
            {
                for (int j = 0; j < upperChar.size(); j++)
                {
                    outVectorArray(finalOut);
                    cout << upperChar[j];

                    if (Text[i] == upperChar[j])
                    {
                        finalOut.push_back(string(1,upperChar[j]));
                        break;
                    }
                    cout << endl;
                }
            }
        }
        cout << endl;
    }
    outVectorArray(finalOut);
    
}

void outVectorArray(const vector <string> Array)
{
    for (const string& s: Array)
    {
        cout << s;
    }
}