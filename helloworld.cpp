// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>
#include <ctime>

// type def convention ends in `_t`.
// typedef std::string text_t;
using text_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

// Git commands
// compile  | g++ -o program_name source_file.cpp
// invoke   | ./program_name.exe

// Function declarations | parameters list data type followed by variable name
void guessNumber();
void terminalFin(int length);

int main()
{
    // Variables | Data type declarations & assignments
    int year = 2024;
    double ver = 1.15;
    text_t appName = "white-raspberry";
    text_t subhead = "user-defined functions";

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    guessNumber();

    // Terminal fin
    cout << "\n\n***********";
    terminalFin(subhead.length());
    cout << "***********\n\n";

    return 0;
}

// Functions definitions | parameters list data type followed by variable name
void guessNumber()
{
    // Returns a random number between 1-5 with arithemetic
    int num;
    int guess;
    int tries;

    // pseudo-random | uses the current time to generate random numbers
    srand(time(NULL));
    num = (rand() % 100) + 1;

    // Terminal prompts
    do
    {
        cout << "Guess the number: ";
        cin >> guess;
        if (guess > num)
        {
            cout << "Too high of a guess!\n";
            tries++;
        }
        else if (guess < num)
        {
            cout << "Too low of a guess!\n";
            tries++;
        }
        else
        {
            cout << "Correct! # of tries: " << tries;
        }
    } while (guess != num);
}

void terminalFin(int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "*";
    }
}