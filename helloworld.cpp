// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>
#include <ctime>

// type def convention ends in `_t`.
// typedef std::string text_t;
using text_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

// Git commands
// compile  | g++ -o program_name source_file.cpp
// invoke   | ./program_name.exe

// User declared functions | parameters list data type followed by variable name
double square(double length);
double cube(double length);
void terminalFin(int length);

int main()
{
    // Variables | Data type declarations & assignments
    int year = 2024;
    double ver = 1.15;
    text_t appName = "white-raspberry";
    text_t subhead = "geometry-calculator";
    double length;
    double area;
    double volume;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts
    cout << "Enter the length of the square/cube: ";
    cin >> length;

    area = square(length);
    volume = cube(length);

    cout << "2D Area: " << area << "cm^2\n";
    cout << "3D Volume: " << volume << "cm^3\n";

    // Terminal fin
    cout << "\n\n***********";
    terminalFin(subhead.length());
    cout << "***********\n\n";

    return 0;
}

// User defined functions
double square(double length)
{
    return pow(length, 2);
}

double cube(double length)
{
    return pow(length, 3);
}

void terminalFin(int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "*";
    }
}