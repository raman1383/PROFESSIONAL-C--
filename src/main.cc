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
}