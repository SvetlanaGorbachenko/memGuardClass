// memGuard.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.hpp"
#include "A.h"

int main()
{
	
	try
	{
		A *pArr = new A[5];
		memGuardClass <A> objArr(pArr, true);

		int *pIntArr = new int[12];
		memGuardClass <int> iArr(pIntArr, true);

		if (true)
			throw(1);

//		delete[] pArr;

	}
	catch (int err)
	{
		cout << "catch block" << endl;

	}

	if (_CrtDumpMemoryLeaks())
		cout << "Memmory Leaks!" << endl;
	else
		cout << "Memmory Ok!" << endl;

	

    return 0;
}

