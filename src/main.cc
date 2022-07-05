#include <iostream>
#include <cstddef>
#include <array>
#include <optional>
#include <vector>
#include "chapter1/crashCourse.hh"

const double PI{3.141592653589793238462};

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
	cout << myArray[2] << endl;
	delete[] myArray;

	Employee anEmployee{
		.firstInitial = 'J',
		.lastInitial = 'D',
		.employeeNumber = 42,
		.salary = {80'000},
	};
	// OR
	Employee anEmployee2{'J', 'D', 0, 80'000};
	cout << anEmployee2.salary << endl;

	/*
		To prevent memory leaks, every call to new should be paired with a
		call to delete, and every call to new[] should be paired with a call to delete[].
		Not calling delete or delete[], or mismatching calls, results in memory leaks or
		worse.
	*/
	int *myIntegerInFreeStore1{nullptr}; // declare uninitialized variable
	myIntegerInFreeStore1 = new int;	 // allocate in free space
	*myIntegerInFreeStore1 = 8;			 // initializing
	int i{9};
	int *myIntegerInFreeStore2{&i};	 // pointing to Address of i
	delete myIntegerInFreeStore2;	 // deallocate in free space
	myIntegerInFreeStore2 = nullptr; // prevent using after deallocation

	Employee *anEmployee3{&anEmployee2}; // pointing to address of anEmployee2 by variable anEmployee3
	(*anEmployee3).employeeNumber;		 // dereference then access
	// OR
	int en3 = anEmployee3->employeeNumber; // dereference and access
	cout << en3 << endl;
	bool isValidSalary{(anEmployee3 != nullptr && anEmployee3->salary > 0)};

	int arraySize{5};							   // on the stack
	int *myVariableSizedArray{new int[arraySize]}; // Dynamically Allocated Arrays in free store(heap)
	myVariableSizedArray[0] = 10;
	myVariableSizedArray[1] = 20;
	myVariableSizedArray[2] = 30;
	cout << myVariableSizedArray[0] << myVariableSizedArray[1] << myVariableSizedArray[2] << endl;
	delete[] myVariableSizedArray;
	myVariableSizedArray = nullptr;

	const int *ipp;
	// SIMILAR, both const the value
	int const *ip;
	ipp = new int[10];
	// ipp[4] = 5; // DOES NOT COMPILE!
	ip = new int[10];
	// ip[4] = 5; // DOES NOT COMPILE!

	int *const iip{nullptr}; // initialization required
	// iip = new int[10]; // DOES NOT COMPILE!
	// iip[4] = 5;		   // Error: dereferencing a null pointer

	int *const ippp{new int[10]};
	ippp[4] = 5;
}