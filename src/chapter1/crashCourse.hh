#pragma once
#include <iostream>
using std::cout, std::cin, std::endl, std::string;

namespace first
{
    int firstX{1};
    namespace second
    {
        int secondX{first::firstX + 1};
    } // namespace second

} // namespace first

namespace fs = first::second;

void funFunction()
{
    cout << fs::secondX << endl;
}