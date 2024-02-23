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
    int year = 2024;               // whole number
    double ver = 1.03;             // decimal
    text_t appName = "labyrinth";  // string
    text_t name = "Edwin Escobar"; // string
    text_t subhead = "hypotenuse-calculator";

    // Hypotenuse calculator | c = √(a^2 + b^2)
    double a;
    double b;
    double c;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";
    cout << subhead << '\n';

    // Terminal prompt
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    // Calculates solution with provided user input, displaying the solution in the terminal
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c;

    return 0;
}