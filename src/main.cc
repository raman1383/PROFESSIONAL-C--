#include <iostream>
#include <cstddef>
#include <array>
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

	std::array<int, 3> arr{1, 2, 3};
	std::vector<int> myVec{1, 2, 3, 4};
	myVec.push_back(5);
	cout << std::size(arr) << endl;
	cout << std::size(myVec) << endl;
}