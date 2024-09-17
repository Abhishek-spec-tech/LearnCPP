/*
C++ Data Types & Constants

**C++ Data Types**  
Data types define what kind of data a variable can store, such as integers, characters, or floating-point numbers. 
They are categorized into three main groups:

1. **Built-in Data Types**  
   These are pre-defined and ready to use in C++. Examples include:
   - `int`: Stores whole numbers.
   - `float`: Stores fractional numbers with decimals.
   - `char`: Stores a single character.
   - `double`: Stores larger fractional numbers.
   - `boolean`: Stores true/false values.

2. **User-defined Data Types**  
   Defined by the programmer, allowing for more complex structures:
   - `Class`, `Struct`, `Union`, `Enum`

3. **Derived Data Types**  
   These are created from existing built-in data types:
   - `Array`, `Pointer`, `Function`

**Popular Built-in Data Types & Their Applications**  
- `int`: Stores whole numbers and uses 2 or 4 bytes.
- `float`: Requires 4 bytes and stores numbers with decimals.
- `double`: Occupies 8 bytes, storing larger decimal numbers.
- `char`: Takes 1 byte, storing a single character or ASCII value.
- `boolean`: Uses 1 byte for true or false values.
*/
#include <iostream>
using namespace std;
 
int main()
{
    const float PI = 3.14;
    cout << "The value of PI is " << PI << endl;
    PI = 3.00; //error, since changing a const variable is not allowed.
}
/*
**C++ Constants**  
Constants are variables whose values are fixed once initialized and cannot be altered later in the program. 
They ensure immutability, providing reliable, fixed values throughout the code.
*/
