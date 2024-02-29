// Git commands
// compile  | g++ -o program_name source_file.cpp
// invoke   | ./program_name.exe

// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>
#include <ctime>

// type def convention ends in `_t`.
// typedef std::string string_t;
using string_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

// User declared functions | parameters list data type followed by variable name
int currentYear();
void terminalStart(string_t subhead);
void terminalFin(int length);
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    // Variables | Data type declarations & assignments
    string_t subhead = "bank-transcator";
    double balance = 0;
    int choice = 0;

    // Terminal greeting
    terminalStart(subhead);

    // Terminal prompts
    do
    {
        cout << "Select a menu option:\n";
        cout << "1. Show balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    // Terminal fin
    terminalFin(subhead.length());
    return 0;
}

void showBalance(double balance){};
double deposit(){};
double withdraw(double balance){};

// Returns the current year
int currentYear()
{
    // The current time in seconds since the Unix Epoch
    std::time_t currentTime = std::time(nullptr);
    // Converts current time to tm structure
    std::tm *timeInfo = std::localtime(&currentTime);
    // Extracts current year from tm structure
    int currentYear = timeInfo->tm_year + 1900;
    return currentYear;
}

// Greets user with app details in the terminal
void terminalStart(string_t subhead)
{
    int year = currentYear();
    double ver = 1.17;
    string_t appName = "white-raspberry";

    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";
}

// Signals app's conclusion in the terminal
void terminalFin(int length)
{
    cout << "\n\n***********";
    for (int i = 0; i < length; i++)
    {
        cout << "*";
    }
    cout << "***********\n\n";
}