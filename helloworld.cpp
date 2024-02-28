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
    double ver = 1.12;
    text_t appName = "white-raspberry";
    text_t subhead = "random number generator";
    // int dice;

    // pseudo-random | initialize random fx, seed w/ current calendar time
    srand(time(NULL));

    // Returns a random number between 1-6 with arithemetic
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    cout << "rolling the dice: ";
    cout << num1 << " | " << num2 << " | " << num3;

    cout << "\n\n********** " << subhead << " **********\n\n";

    return 0;
}