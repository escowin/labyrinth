// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>

// type def convention ends in `_t`.
// typedef std::string text_t;
using text_t = std::string; // more suitable than typedef for templates

// namespaces provides a solution for preventing nam conflicts in large projects
namespace first
{
    int x = 1;
}

int main()
{
    // using namespace first;
    using std::cin;
    using std::cout;

    // Variables | Data type declarations & assignments
    int year = 2024;     // whole numbers
    double ver = 1.01;   // decimals
    bool student = true; // true or false
    char grade = 'A';    // single character, uses single quotes

    // string | multi character text object, uses double quotes
    text_t appName = "Labyrinth";
    text_t name = "Edwin Escobar";

    // Terminal messages
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << "\n\n";

    // Arithmetic | https://cplusplus.com/reference/cmath/
    double x = 3.99;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 4); // power
    // z = sqrt(9);   // square root
    // z = abs(-3);   // absolute
    // z = round(x);  // round
    // z = ceil(x);   // round up
    z = floor(x); // round down

    cout << z;

    return 0;
}