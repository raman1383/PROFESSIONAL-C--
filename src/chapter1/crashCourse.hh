#pragma once
#include <iostream>

using std::cout, std::cin, std::endl, std::string;

enum class Courtiers
{
    CourtiersKing,
    CourtiersQueen,
    CourtiersSoldier,

};

namespace first
{
    int firstX{1};

    namespace second
    {
        int secondX{first::firstX + 1};

        namespace third
        {
            int thirdX{first::second::secondX + 1};

            Courtiers person1 = Courtiers::CourtiersKing;
        } // third

    } // namespace second

} // namespace first

namespace fs = first::second;
namespace fst = first::second::third;

struct Employee
{
    int employeeNumber;
    int salary;
};

void funFunction()
{
    cout << first::firstX << fs::secondX << fst::thirdX << endl; // 123

    if (first::second::third::thirdX == 1)
    {
        cout << "shit! " << endl;
    }
    else if (fst::thirdX == 2)
    {
        cout << "shit more !" << endl;
    }
    else
    {
        cout << "No shit ! ! !" << endl;
    }

    switch (fst::person1)
    {
    case Courtiers::CourtiersKing:
        cout << "It's the king" << endl;
        break;
    case Courtiers::CourtiersQueen:
        cout << "It's the queen" << endl;

    default:
        cout << "It's a soldier " << endl;
        break;
    }

    (fst::person1 == Courtiers::CourtiersKing) ? cout << "it's king \n" : cout << "it's not king\n";
}