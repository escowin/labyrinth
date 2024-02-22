// Loads header file for basic input & output operations
#include <iostream>

int main()
{
    // Variables | Declarations & assignments

    // Data types
    // integer | whole numbers
    int x;
    x = 5;

    int y = 10;
    int sum = x + y;
    int year = 2024;

    // double | decimals
    double ver = 1.01;

    // char | single character, uses single quotes
    char grade = 'A';

    // boolean | true or false
    bool student = true;

    // string | multi character text, uses double quotes
    std::string appName = "Labyrinth";
    std::string name = "Edwin Escobar";

    // Multi-line terminal message
    // - standard :: character output << "string" << end line or '\n'; repeat
    std::cout << appName << " v" << ver << std::endl;
    std::cout << "\u00A9 " << year << " " << name << '\n';

    // Displays variable
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // Return 0 indicates no errors
    return 0;
}