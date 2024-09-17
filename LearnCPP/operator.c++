#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;

    // Arithmetic Operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    // Comparison Operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;

    // Logical Operators
    int c = 1, d = 0;
    cout << "The value of c && d is " << (c && d) << endl;
    cout << "The value of c || d is " << (c || d) << endl;
    cout << "The value of !c is " << (!c) << endl;

    // Bitwise Operators
    int e = 13; // 1101 in binary
    int f = 5;  // 0101 in binary
    cout << "The value of e & f is " << (e & f) << endl;   // Bitwise AND
    cout << "The value of e | f is " << (e | f) << endl;   // Bitwise OR
    cout << "The value of e ^ f is " << (e ^ f) << endl;   // Bitwise XOR
    cout << "The value of ~e is " << (~e) << endl;         // Bitwise NOT
    cout << "The value of e >> 2 is " << (e >> 2) << endl; // Right shift
    cout << "The value of e << 2 is " << (e << 2) << endl; // Left shift

    return 0;
}
/*
### Explanation:

1. **Arithmetic Operators**: Demonstrates addition, subtraction, multiplication, division, modulus, and increment/decrement operators.
2. **Comparison Operators**: Compares the values of `a` and `b` using `==`, `<`, and `>`.
3. **Logical Operators**: Evaluates logical operations like AND (`&&`), OR (`||`), and NOT (`!`) on the values of `c` and `d`.
4. **Bitwise Operators**: Performs bitwise operations such as AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), and bit shifts (`>>`, `<<`).

This program showcases different categories of operators in C++.
*/