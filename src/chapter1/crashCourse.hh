#pragma once
#include <iostream>
using std::cout, std::cin, std::endl, std::string;

namespace first
{
    int firstX{1};

    namespace second
    {
        int secondX{first::firstX + 1};

        namespace third
        {
            int thirdX{first::second::secondX + 1};
        } // third

    } // namespace second

} // namespace first

namespace fs = first::second;
namespace fst = first::second::third;

void funFunction()
{
    cout << first::firstX << fs::secondX << fst::thirdX << endl; // 123
}