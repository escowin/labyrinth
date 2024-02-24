// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>

// type def convention ends in `_t`.
// typedef std::string text_t;
using text_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

int main()
{
    // App details | Data type declarations & assignments
    int year = 2024;
    double ver = 1.05;
    text_t appName = "labyrinth";
    text_t name = "Edwin Escobar";
    text_t subhead = "logical operators";

    // Variables
    int temp;
    bool sunny = true;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    cout << "Enter temp: ";
    cin >> temp;

    (temp <= 0 || temp >= 30) ? cout << "temp is bad\n" : cout << "temp is good\n";

    !sunny ? cout << "it is sunny" : cout << "it is cloudy";

    cout << "\n\n********************************\n";

    return 0;
}