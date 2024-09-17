/*
C++ Manipulators

Manipulators in C++ are special functions used to format the output in a desired way. They help in modifying the input and output streams to control how data is displayed, such as setting width, precision, or changing numerical bases. Some manipulators, like endl, are part of the <iostream> library, while others require the <iomanip> header.

Here are some commonly used manipulators:

Manipulator	Description
endl	Inserts a new line and flushes the output buffer.
setw(a)	Sets the width of the output to a characters.
setprecision(a)	Controls the number of digits after the decimal point for floats.
setbase(a)	Changes the base of numerical values (e.g., decimal, octal, hex).
Example Code: Implementation of Manipulators in C++
*/
#include <iostream>
#include <iomanip>  // Required for setw, setprecision, setbase
using namespace std;

int main()
{
    int num = 255;
    float pi = 3.14159;

    // Using endl
    cout << "This is a line." << endl;
    cout << "This is a new line after endl." << endl;

    // Using setw
    cout << "Without setw:" << endl;
    cout << num << endl;
    cout << "With setw(10):" << endl;
    cout << setw(10) << num << endl;

    // Using setprecision
    cout << "With setprecision(3): " << setprecision(3) << pi << endl;
    cout << "With setprecision(5): " << setprecision(5) << pi << endl;

    // Using setbase
    cout << "Number in decimal (default): " << num << endl;
    cout << "Number in hexadecimal (setbase(16)): " << setbase(16) << num << endl;
    cout << "Number in octal (setbase(8)): " << setbase(8) << num << endl;

    return 0;
}
/*
Explanation:
endl: Adds a newline and flushes the output buffer, ensuring all data is written before moving to the next line.
setw: Sets a fixed width for output, padding the number if necessary.
setprecision: Controls how many digits are shown after the decimal point for floating-point numbers.
setbase: Changes the base of integer output (e.g., decimal 10, hexadecimal 16, or octal 8).
*/