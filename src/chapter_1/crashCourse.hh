#pragma once
#include <iostream>
#include <limits>
#include <cassert>

using std::cout;
// using std::format;
using std::numeric_limits;
#define MAX 10

namespace first

{
    void sayHelloFirst()
    {
        cout << "Hello first !\n";
    }
    namespace second
    {
        void sayHelloSecond()
        {
            cout << "Hello second ! \n";
        }
    } // namespace second

} // fist

namespace FirstThenSecond = first::second;

void forFun()
{
    int age{12};
    float pi{3.14159};
    cout << int(pi) << int(pi) << static_cast<int>(pi) << '\n';

    std::cout << "age : " << age << std::endl;

    first::sayHelloFirst();
    first::second::sayHelloSecond();
    FirstThenSecond::sayHelloSecond();
    cout << "MAX is : " << MAX << "\n";

    cout << "int:\n";
    cout << "Max int value: " << numeric_limits<int>::max() << '\n';
}