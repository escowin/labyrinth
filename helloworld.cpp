// Loads header file for basic input & output operations
#include <iostream>
#include <vector>

// type def convention ends in `_t`
// typedef std::vector<std::pair<std::string, int>> pairlist_t
// typedef std::string text_t;

// more common than typedef since its more suitable for templates
using text_t = std::string;

// namespaces provides a solution for preventing nam conflicts in large projects
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // scope resolution operator `::`
    using namespace first; 
    using std::cout;

    // Variables | Data type declarations & assignments
    int year = 2024; // whole numbers
    double ver = 1.01; // decimals
    bool student = true; // true or false
    char grade = 'A'; // single character, uses single quotes
    
    const double PI = 3.14159; // const locks value, use all caps for convention
    double r = 10;
    double circ = 2 * PI * r;

    // int x = 0;

    // string | multi character text object, uses double quotes
    text_t appName = "Labyrinth";
    text_t name = "Edwin Escobar";

    // Terminal messages
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " " << name << '\n';
    cout << "circle circumference: " << circ << '\n';
    cout << x;

    // Return 0 indicates no errors
    return 0;
}