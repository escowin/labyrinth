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
    double ver = 1.04;             // decimal
    text_t appName = "labyrinth";  // string
    text_t name = "Edwin Escobar"; // string
    text_t subhead = "hypotenuse-calculator";

    // User details
    int age;

    // Hypotenuse calculator | c = √(a^2 + b^2)
    double a;
    double b;
    double c;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";
    // cout << subhead << '\n';

    // Terminal prompts
    cout << "Enter you age: ";
    cin >> age;

    // Validation
    if (age >= 18) {
        cout << "Welcome to the " << subhead << '\n';
    }
    else if (age < 0) {
        cout << "You don't exist yet" << '\n';
        return 0;
    }
    else {
        cout << "You're too young to use the " << subhead << '\n';
        return 0;
    }

    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    // Calculates solution with provided user input, displaying the solution in the terminal
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c;

    return 0;
}