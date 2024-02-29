// Git commands
// compile  | g++ -o program_name source_file.cpp
// invoke   | ./program_name.exe

// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>
#include <ctime>

// type def convention ends in `_t`.
// typedef std::string string_t;
using string_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

// User declared functions | parameters list data type followed by variable name
int currentYear();
double square(double length);
double cube(double length);
void terminalStart(string_t subhead);
void terminalFin(int length);

int main()
{
    // Variables | Data type declarations & assignments
    string_t subhead = "geometry-calculator";
    double length;

    // Terminal greeting
    terminalStart(subhead);

    // Terminal prompts
    cout << "Enter the length of the square/cube: ";
    cin >> length;

    double area = square(length);
    double volume = cube(length);

    cout << "2D Area: " << area << "cm^2\n";
    cout << "3D Volume: " << volume << "cm^3\n";

    // Terminal fin
    terminalFin(subhead.length());
    return 0;
}

// Returns calculated 2D area
double square(double length)
{
    return pow(length, 2);
}

// Returns calculated 3D volume
double cube(double length)
{
    return pow(length, 3);
}

// Returns the current year
int currentYear() {
    // The current time in seconds since the Unix Epoch
    std::time_t currentTime = std::time(nullptr);
    // Converts current time to tm structure
    std::tm* timeInfo = std::localtime(&currentTime);
    // Extracts current year from tm structure
    int currentYear = timeInfo->tm_year + 1900;
    return currentYear;
}

// Greets user with app details in the terminal
void terminalStart(string_t subhead)
{
    int year = currentYear();
    double ver = 1.16;
    string_t appName = "white-raspberry";

    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";
}

// Signals app's conclusion in the terminal
void terminalFin(int length)
{
    cout << "\n\n***********";
    for (int i = 0; i < length; i++)
    {
        cout << "*";
    }
    cout << "***********\n\n";
}