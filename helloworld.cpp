// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>

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
    double ver = 1.08;
    text_t appName = "labyrinth";
    text_t subhead = "do while loop";
    int number;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    // do while loop = do some block of code first, then repeat again if condition is true
    do
    {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0);

    cout << "The number is: " << number;

    cout << "\n\n********************************\n";

    return 0;
}