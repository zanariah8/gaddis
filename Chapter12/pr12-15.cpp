// This program demonstrates the MyString class. Be
// sure to compile this program with mystring.cpp.
#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
    MyString object1("This"), object2("is");
    MyString object3("a test.");
    MyString object4 = object1;  // Call copy constructor
    MyString object5("is only a test.");
    char string1[] = "a test.";

    cout << "object1: " << object1 << endl;
    cout << "object2: " << object2 << endl;
    cout << "object3: " << object3 << endl;
    cout << "object4: " << object4 << endl;
    cout << "object5: " << object5 << endl;
    cout << "string1: " << string1 << endl;
    object1 += " ";
    object1 += object2;
    object1 += " ";
    object1 += object3;
    object1 += " ";
    object1 += object4;
    object1 += " ";
    object1 += object5;
    cout << "object1: " << object1 << endl;
    return 0;
}