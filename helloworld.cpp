// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>

// type def convention ends in `_t`.
// typedef std::string text_t;
using text_t = std::string; // more suitable than typedef for templates

int main()
{
    using std::cin;
    using std::cout;

    // App variables | Data type declarations & assignments
    int year = 2024;     // whole number
    double ver = 1.02;   // decimal
    text_t appName = "Labyrinth"; // string
    text_t name = "Edwin Escobar"; // string
    text_t subhead = "Hypotenuse calculator";

    // Terminal greeting
    cout << appName << " v" << ver << " | " << subhead << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";
    
    // Hypotenuse calculator | c = √(a^2 + b2)
    double a;
    double b;
    double c;

    // Terminal prompt
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c;

    return 0;
}