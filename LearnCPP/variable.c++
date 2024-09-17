//-----c++ Variable---

/*
Variables are containers for storing data values. In C++, 
there are different types of variables: int for integers, float for floating-point numbers, char for single characters, 
and bool for true/false values.


1.------ Local variable--
  Local variables are declared inside a function and are only accessible within that function.
2.------- Global variable--
Global variables are declared outside any function and are accessible from any part of the program.

*/
#include <iostream>
using namespace std;
 
int a = 5; //global variable
 
void func()
{
    cout << a << endl;
}
 
int main()
{
    int a = 10; //local variable
    cout << a << endl;
    func();
    return 0;
}
/*A local variable a was declared in the main function, and when printed, gave 10.
 This is because, within the body of a function, a local variable takes precedence over a global variable with the same name. 
But since there was no variable declared in the func function, 
it considered the global variable a for printing, and hence the value 5.*/