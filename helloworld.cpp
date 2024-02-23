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
    text_t subhead = "calculator";

    // Calculator variables
    char op;
    double num1;
    double num2;
    double result;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    cout << "Enter an operation (+ - * /): ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter #2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        cout << "result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        cout << "result: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        cout << "result: " << result << '\n';
        break;
    default:
        cout << "invalid operator\n";
        break;
    }

    cout << "\n********************************\n";

    return 0;
}