// Loads header file for basic input & output operations
#include <iostream>

// namespaces provides a solution for preventing nam conflicts in large projects
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using namespace first; 

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
    std::string appName = "Labyrinth";
    std::string name = "Edwin Escobar";

    // Terminal messages
    std::cout << appName << " v" << ver << std::endl;
    std::cout << "\u00A9 " << year << " " << name << '\n';

    std::cout << "circle circumference: " << circ << '\n';

    // std::cout << first::x; // using scope resolution operator `::`
    std::cout << x;

    // Return 0 indicates no errors
    return 0;
}