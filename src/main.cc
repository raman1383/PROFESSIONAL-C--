#include <iostream>
#include "chapter1/crashCourse.hh"

[[nodiscard]] int func()
{
	return 212;
}

int main()
{
	using std::cout, std::cin, std::endl;
	cout << "Hello, world !" << endl;

	funFunction();

	Employee mia;
	mia.employeeNumber = 19;
	mia.salary = 9000;

	func();
}