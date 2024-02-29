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

int main()
{
    // Variables | Data type declarations & assignments
    int year = 2024;
    double ver = 1.13;
    text_t appName = "white-raspberry";
    text_t subhead = "random super power generator";
    // int dice;

    // pseudo-random | uses the current time to generate random numbers
    srand(time(0));

    // Returns a random number between 1-5 with arithemetic
    int num1 = (rand() % 5) + 1;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal message
    switch (num1)
    {
    case 1:
        cout << "You get za waruldo!\n";
        break;
    case 2:
        cout << "You get spidey sense\n";
        break;
    case 3:
        cout << "You get blueshell\n";
        break;
    case 4:
        cout << "You get time travel\n";
        break;
    case 5:
        cout << "You get nothing\n";
        break;
    }

    cout << "\n\n********** " << subhead << " **********\n\n";

    return 0;
}