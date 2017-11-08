#include <iostream>
#include <sstream>
#include <string.h>

class humanPublic
{
public:
	int day;
	int month;
	int year;

	void setBirth(int birthDay, int birthMonth, int birthYear)
	{
		day = birthDay;
		month = birthMonth;
		year = birthYear;
	}

	std::string getBirth()
	{
		std::stringstream s;
		std:: string birthDate;
		s << day << '.' << month << '.' << year << std::endl;
		s >> birthDate;

		return birthDate;
	}
};

class humanPrivate
{
private:
	bool isMast;

public:
	bool getIsMast()
	{
		return isMast;
	}
};

int sumIntAndIntPointer(int a, int *ptrA)
{
	*ptrA = *ptrA + a;
	return *ptrA;
}

int incIntPointer(int *ptr)
{
	*ptr = *ptr + 1;
	return *ptr;
}

int testPtrs()
{
	int a = 1;
	int *ptrA = &a;
	std::cout << "à = " << a << std::endl;
	std::cout << "&à = " << &a << "	ptrA = " << ptrA << std::endl;
	std::cout << "*ptrA = " << *ptrA << std::endl << std::endl;

	std::cout << "Sum of int and int pointer = " << sumIntAndIntPointer(a, ptrA) << std::endl << std::endl;

	std::cout << "ptrA after increasing = " << incIntPointer(ptrA) << std::endl << std::endl;

	char temp;
	std::cin >> temp;
	return 0;
}

int testPubClass()
{
	humanPublic me;
	me.setBirth(1, 9, 1994);

	std::cout << me.getBirth() << std::endl;
	std::cout << me.day << '.' << me.month << '.' << me.year;


	char a;
	std::cin >> a;
	return 0;
}

int main()
{


	return 0;
}