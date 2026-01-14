#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <cstdlib> // for system("cls")
using namespace std;

string Username;
string Password;
fstream Userfile;
string userFilePath;

bool checkAccount();
bool makeAccount();
int Menu();
bool LogIn();
void addTask();
void viewTasks();
void markTaskComplete();
void deleteTask();

int main()
{
    cout << "\n========================================" << endl;
    cout << "         WELCOME TO TASK MANAGER        " << endl;
    cout << "========================================" << endl;

    bool loggedIn = LogIn();

    if (!loggedIn)
    {
        cout << "Failed to log in or create an account." << endl;
        return 1;
    }

    int Op;

    while (1)
    {
        system("cls"); // clear screen before showing menu
        Op = Menu();

        switch (Op)
        {
        case 1:
            addTask();
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            markTaskComplete();
            break;
        case 4:
            deleteTask();
            break;
        case 5:
            cout << "Exiting the Task Manager. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

bool checkAccount()
{
    ifstream file("accounts.txt");
    if (!file.is_open())
    {
        cout << "\n[ERROR] Unable to open accounts file.\n" << endl;
        return 0;
    }

    cout << "\n========================================" << endl;
    cout << "              ACCOUNT LOGIN             " << endl;
    cout << "========================================" << endl;

    cout << " Enter Username: ";
    getline(cin, Username);
    cout << " Enter Password: ";
    getline(cin, Password);

    string line1, line2;
    bool AccountFound = 0;

    file.clear();
    file.seekg(0, ios::beg);

    while (getline(file, line1) && getline(file, line2))
    {
        if (line1 == Username && line2 == Password)
        {
            AccountFound = 1;
            break;
        }
    }

    file.close();

    if (AccountFound)
    {
        cout << "\nLogin successful!\n";
        system("pause");
        system("cls");
        return 1;
    }

    cout << "\nLogin failed. Invalid credentials.\n" << endl;
    return 0;
}

bool makeAccount()
{
    fstream file("accounts.txt", ios::in | ios::out);
    if (!file.is_open())
    {
        cout << "\n[ERROR] Unable to open accounts file.\n" << endl;
        return 0;
    }

    bool AccountExists = 1;
    string line1, line2;

    cout << "\n========================================" << endl;
    cout << "            CREATE AN ACCOUNT           " << endl;
    cout << "========================================" << endl;

    while (AccountExists)
    {
        cout << " Choose a Username: ";
        getline(cin, Username);
        cout << " Choose a Password: ";
        getline(cin, Password);
        AccountExists = 0;

        file.clear();
        file.seekg(0, ios::beg);

        while (getline(file, line1) && getline(file, line2))
        {
            if (line1 == Username)
            {
                AccountExists = 1;
                cout << "\nAccount with this username already exists.\n" << endl;
                break;
            }
        }
    }

    file.clear();
    file.seekp(0, ios::end);
    file << Username << endl;
    file << Password << endl;
    file.close();

    cout << "\nAccount created successfully.\n";
    system("pause");
    system("cls");
    return 1;
}

bool LogIn()
{
    int Choice;

    cout << "\n========================================" << endl;
    cout << "    DO YOU HAVE AN EXISTING ACCOUNT?    " << endl;
    cout << "========================================" << endl;
    cout << " Enter 1 for Yes, 0 for No: ";

    while (1)
    {
        cin >> Choice;
        cin.ignore();

        if (Choice == 1 || Choice == 0)
            break;

        cout << " Invalid input. Please input again: ";
    }

    system("cls");

    if (Choice == 1)
    {
        if (!checkAccount())
            return 0;

        userFilePath = "Accounts/" + Username + ".txt";
        Userfile.open(userFilePath, ios::in | ios::out | ios::app);
    }
    else
    {
        if (!makeAccount())
            return 0;

        userFilePath = "Accounts/" + Username + ".txt";
        Userfile.open(userFilePath, ios::in | ios::out);
    }

    if (!Userfile.is_open())
    {
        ofstream temp(userFilePath);
        temp.close();
        Userfile.open(userFilePath, ios::in | ios::out);
    }

    return 1;
}

int Menu()
{
    cout << "\n========================================" << endl;
    cout << "             TASK DASHBOARD             " << endl;
    cout << "========================================" << endl;
    cout << " Welcome, " << Username << "!" << endl;

    Userfile.clear();
    Userfile.seekg(0, ios::beg);

    string line1, line2;
    int index = 1;

    cout << "\n------------ Your Tasks ---------------" << endl;
    while (getline(Userfile, line1) && getline(Userfile, line2))
    {
        cout << " [" << index++ << "] " << line1 << endl;
        cout << "     Status: " << (line2 == "1" ? "Completed" : "Not Completed") << endl;
    }

    if (index == 1)
        cout << " (No tasks yet)" << endl;

    cout << "----------------------------------------" << endl;
    cout << "\nMain Menu" << endl;
    cout << "----------------------------------------" << endl;
    cout << " 1. Add Task" << endl;
    cout << " 2. View Tasks" << endl;
    cout << " 3. Mark Task as Complete/Incomplete" << endl;
    cout << " 4. Delete Task" << endl;
    cout << " 5. Exit" << endl;

    cout << "\nEnter your choice [1 - 5]: ";
    int choice;
    while (true)
    {
        cin >> choice;
        if (choice >= 1 && choice <= 5)
            break;
        cout << " Invalid input. Please enter a number between 1 and 5: ";
    }

    cin.ignore();
    return choice;
}

void addTask()
{
    string task;
    cout << "\n----------------------------------------" << endl;
    cout << "              ADD TASK                  " << endl;
    cout << "----------------------------------------" << endl;
    cout << " Enter your task: ";
    getline(cin, task);

    Userfile.clear();
    Userfile.seekp(0, ios::end);
    Userfile << task << endl;
    Userfile << "0" << endl;

    cout << "\nTask added successfully!\n";
    system("pause");
    system("cls");
}

void viewTasks()
{
    cout << "\n----------------------------------------" << endl;
    cout << "              VIEW TASKS                " << endl;
    cout << "----------------------------------------" << endl;

    Userfile.clear();
    Userfile.seekg(0, ios::beg);

    string line1, line2;
    int index = 1;

    while (getline(Userfile, line1) && getline(Userfile, line2))
    {
        cout << " [" << index++ << "] " << line1 << endl;
        cout << "     Status: " << (line2 == "1" ? "Completed" : "Not Completed") << endl;
    }

    if (index == 1)
        cout << " (No tasks to show)\n";

    system("pause");
    system("cls");
}

void markTaskComplete()
{
    int Num;
    cout << "Enter the task number to toggle completion status: ";
    cin >> Num;
    cin.ignore();

    Userfile.clear();
    Userfile.seekg(0, ios::beg);

    string line1, line2;
    vector<string> tasks;
    vector<string> status;

    while (getline(Userfile, line1) && getline(Userfile, line2))
    {
        tasks.push_back(line1);
        status.push_back(line2);
    }

    if (Num <= 0 || Num > status.size())
    {
        cout << "Invalid task number.\n";
        system("pause");
        system("cls");
        return;
    }

    int idx = Num - 1;
    status[idx] = (status[idx] == "1") ? "0" : "1";

    Userfile.close();
    Userfile.open(userFilePath, ios::out | ios::trunc);

    for (int i = 0; i < tasks.size(); i++)
    {
        Userfile << tasks[i] << endl;
        Userfile << status[i] << endl;
    }

    Userfile.close();
    Userfile.open(userFilePath, ios::in | ios::out);

    cout << "\nTask status updated.\n";
    system("pause");
    system("cls");
}

void deleteTask()
{
    int Num;
    cout << "Enter the task number to delete: ";
    cin >> Num;
    cin.ignore();

    Userfile.clear();
    Userfile.seekg(0, ios::beg);

    string line1, line2;
    vector<string> tasks;
    vector<string> status;

    while (getline(Userfile, line1) && getline(Userfile, line2))
    {
        tasks.push_back(line1);
        status.push_back(line2);
    }

    if (Num <= 0 || Num > tasks.size())
    {
        cout << "Invalid task number.\n";
        system("pause");
        system("cls");
        return;
    }

    tasks.erase(tasks.begin() + Num - 1);
    status.erase(status.begin() + Num - 1);

    Userfile.close();
    Userfile.open(userFilePath, ios::out | ios::trunc);

    for (int i = 0; i < tasks.size(); i++)
    {
        Userfile << tasks[i] << endl;
        Userfile << status[i] << endl;
    }

    Userfile.close();
    Userfile.open(userFilePath, ios::in | ios::out);

    cout << "\nTask deleted successfully.\n";
    system("pause");
    system("cls");
}
