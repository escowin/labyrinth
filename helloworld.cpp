// Git commands
// compile  | g++ -o program_name source_file.cpp
// invoke   | ./program_name.exe

// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip> // contains set precision fx() for floating point numbers

// type def convention ends in `_t`.
// typedef std::string string_t;
using string_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

// User-declared functions
int currentYear();
void terminalStart(string_t subhead, double ver);
void terminalFin(int length);

// Game-specific functions
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char cpu);

int main()
{
    // App variables
    double ver = 1.20;
    string_t subhead = "rock-paper-scissors";

    // Game variables
    char player;
    char cpu;
    char choice;

    // Terminal greeting
    terminalStart(subhead, ver);

    // Terminal prompts
    player = getUserChoice();

    // Terminal fin
    terminalFin(subhead.length());
    return 0;
}

char getUserChoice()
{
    char choice;

    do
    {
        cout << "*****************\n";
        cout << "Select your move:\n";
        cout << "*****************\n";
        cout << "r. rock\n";
        cout << "p. paper\n";
        cout << "s. scissors\n";
        cin >> choice;
        cout << "you selected: " << choice << '\n';
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return 0;
}
char getComputerChoice()
{
    return 0;
}
void showChoice(char choice) {}
void chooseWinner(char player, char cpu) {}

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
void terminalStart(string_t subhead, double ver)
{
    int year = currentYear();
    string_t appName = "white-raspberry";

    cout << appName << " v0." << std::setprecision(2) << std::fixed << ver << std::endl;
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