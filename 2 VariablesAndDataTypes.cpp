//input/output stream library
#include <iostream>
//td namespace to simplify access to standard library elements
using namespace std;

int main() {
    //printing string
    std::cout << "Hello World!" << std::endl;
    string name = "Analytical Harry";

    //integer Data Types
    int integerVar = 42;
    short shortVar = 123;
    long long longLongVar = 1234567890;

    //floating-point Data Types
    float floatVar = 3.14f;
    double doubleVar = 2.71828;
    long double longDoubleVar = 1.234567890123456789;

    //character Data Type
    char charVar = 'A';

    //boolean Data Type
    bool boolVar = true;

    //additional print statements for the data types
    std::cout << "int: " << integerVar << std::endl;
    cout << "String variable: " << name << endl;
    std::cout << "short: " << shortVar << std::endl;
    std::cout << "long long: " << longLongVar << std::endl;
    std::cout << "float: " << floatVar << std::endl;
    std::cout << "double: " << doubleVar << std::endl;
    std::cout << "long double: " << longDoubleVar << std::endl;
    std::cout << "char: " << charVar << std::endl;
    std::cout << "bool: " << boolVar << std::endl;

    return 0;
}

//******************************************************
// Author: Hemant Thapa
// Programming Language: C++
// Date Pushed to GitHub: 18.01.2024
// Email: hemantthapa1998@gmail.com
//******************************************************