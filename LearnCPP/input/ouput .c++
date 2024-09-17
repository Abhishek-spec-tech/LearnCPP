/*

In C++, the short forms for input and output operations are:

Input: cin
Output: cout
These are part of the <iostream> 
library and are used with the extraction operator (>>) for input and the insertion operator (<<) for output.

*/
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";  // Output
    cin >> a;                    // Input
    cout << "You entered: " << a << endl;  // Output
    return 0;
}
/*
cin takes input from the user.
cout prints output to the console.
*/