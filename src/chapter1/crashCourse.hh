// until page 74 of professional C++

#pragma once
#include <iostream>
#include <initializer_list>
#include <optional>

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

[[nodiscard("Some explanation")]] int func(int value1, [[maybe_unused]] int value2)
{
    return 212;
}

std::optional<int> getData(bool giveIt)
{
    /*
    optional
    removes the need to return “special” values from functions such as nullptr, end(), -1, EOF,
    and so on. It also removes the need to write the function as return
    */

    if (giveIt)
    {
        return 42;
    }
    return std::nullopt; // or simply return {};
}

void looper()
{
    int x{};
    while (x < 2)
    {
        cout << "while looping ! \n";
        ++x;
    }

    int xx{};
    do
    {
        cout << "do while ing ! \n";
        ++xx;
    } while (xx < 3);

    for (int i = 0; i < 4; i++)
    {
        cout << "for looping ! \n";
    }

    std::array arr{1, 2, 3, 4, 5};
    for (int i : arr)
    {
        cout << i << endl;
    }
}

int makeSum(std::initializer_list<int> values)
{
    int total{0};
    for (int value : values)
    {
        total += value;
    }
    cout << total << endl;
    return total;
}

class AirlineTicket
{
public:
    double calculatePriceInDollars()
    {
        if (hasEliteSuperRewardsStatus())
        {
            return 0;
        }
        return getNumberOfMiles() * 0.1;
    }
    void setPassengerName(std::string name) { m_passengerName = name; }
    int getNumberOfMiles() { return m_numberOfMiles; }
    void setNumberOfMiles(int miles) { m_numberOfMiles = miles; }
    bool hasEliteSuperRewardsStatus() { return m_hasEliteSuperRewardsStatus; }
    void setHasEliteSuperRewardsStatus(bool status)
    {
        m_hasEliteSuperRewardsStatus = status;
    }

private:
    std::string m_passengerName{"Unknown Passenger"};
    int m_numberOfMiles{0};
    bool m_hasEliteSuperRewardsStatus{false};
};

// scopes
class Demo
{
public:
    int get() { return 5; }
};

int get() { return 10; }

namespace NS
{
    int get() { return 20; }
}
//

struct CircleStruct
{
    int x, y;
    double radius;
};
class CircleClass
{
public:
    CircleClass(int x, int y, double radius)
        : m_x{x}, m_y{y}, m_radius{radius} {}

private:
    int m_x, m_y;
    double m_radius;
};

export struct Employee
{
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};
//! Variables that are stack allocated do not need to be deallocated (deleted) by the programmer; it happens automatically

//! executable, from main