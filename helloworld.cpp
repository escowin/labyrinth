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
    text_t subhead = "temperature-calculator";

    // Variables
    double temp;
    char unit;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";
    cout << "********** " << subhead << " **********\n\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";

    // Terminal prompts
    cout << "Select a unit to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter temp in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temp is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter temp in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temp is: " << temp << "C\n";
    }
    else
    {
        cout << "Invalid unit, enter either C or F\n";
    }

    cout << "\n\n********************************\n";

    return 0;
}