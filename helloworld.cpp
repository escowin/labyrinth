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
    double ver = 1.10;
    text_t appName = "labyrinth";
    text_t subhead = "loop w/ continue";
    int number;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    do
    {
        cout << "Enter a number to start the New year countdown: ";
        cin >> number;
    } while (number < 0);

    for (int i = number; i >= 1; i--)
    {
        // Skips culturally unlucky numbers for auspicious countdowns
        if (i == 13 || i == 4)
        {
            continue;
        }
        cout << i << '\n';
    }

    cout << "happy new year!\n";
    cout << "\n\n********************************\n";

    return 0;
}