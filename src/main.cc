#include <iostream>
#include <cstddef>
#include <array>
#include <optional>
#include <vector>
#include "chapter1/crashCourse.hh"

int main()
{
	using std::cout, std::cin, std::endl;
	cout << "Hello, world !" << endl;

	funFunction();

	Employee mia;
	mia.employeeNumber = 19;
	mia.salary = 9000;

	// func(12, 2);
	// forceProgramTermination();
	// funct();

	std::array arr{1, 2, 3};
	std::vector myVec{1, 2, 3, 4};
	myVec.push_back(5);
	cout << std::size(arr) << endl;
	cout << std::size(myVec) << endl;

	std::pair myPair{9.2, 2};

	std::optional<int> data1{getData(true)};
	std::optional<int> data2{getData(false)}; //<utility>
	cout << "data1.has_value = " << data1.has_value() << endl;
	if (data2)
	{
		cout << "data2 has a value." << endl;
	}

	struct Point
	{
		double m_x, m_y, m_z;
	};
	Point point;
	point.m_x = 1.0;
	point.m_y = 2.0;
	point.m_z = 3.0;
	auto [x, y, z]{point};		 // order is important
	cout << x << y << z << endl; // 1,2,3

	looper();
	makeSum({1, 2, 3, 4, 5, 6});

	std::string myString = "Hello to the C++";

	AirlineTicket myTicket;
	myTicket.setPassengerName("Sherman T. SocketWrench");
	myTicket.setNumberOfMiles(700);
	double cost{myTicket.calculatePriceInDollars()};
	cout << "This ticket will cost " << cost << endl;

	Demo d;
	cout << d.get() << endl;   //  5
	cout << NS::get() << endl; //  20
	cout << ::get() << endl;   //  10
	cout << get() << endl;	   //  10

	CircleStruct myCircle5;
	myCircle5.radius = 2.5;
	myCircle5.x = 10;
	myCircle5.y = 10;
	// OR
	CircleClass myCircle6{10, 10, 2.5};

	int *myArray = new int[]{0, 1, 2, 3};
	delete[] myArray;

	Employee anEmployee{
		.firstInitial = 'J',
		.lastInitial = 'D',
		.employeeNumber = 42,
		.salary = {80'000},
	};
	// OR
	Employee anEmployee2{'J', 'D', 0, 80'000};

	int *myIntegerInFreeStore{nullptr}; // declare uninitialized variable
	myIntegerInFreeStore = new int;		// allocate in free space
	*myIntegerInFreeStore = 8;			// initializing
	int i{9};
	int *myIntegerInFreeStore{&i};	// pointing to Address of i
	delete myIntegerInFreeStore;	// deallocate in free space
	myIntegerInFreeStore = nullptr; // prevent using after deallocation
}