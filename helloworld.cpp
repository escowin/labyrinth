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
    // App details | Data type declarations & assignments
    int year = 2024;
    double ver = 1.07;
    text_t appName = "labyrinth";
    text_t subhead = "while loop";

    text_t name;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    while (name.empty())
    {
        cout << "Enter a name: ";
        std::getline(cin, name);
    }

    cout << "Hello, " << name;

    cout << "\n\n********************************\n";

    return 0;
}