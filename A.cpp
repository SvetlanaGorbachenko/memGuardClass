#include "stdafx.h"
#include "A.h"


A::A(int a):m_a(a)
{
	cout << "constructor A(int a)" << " this = " << this << endl;
}


A::~A()
{
	cout << "destructor ~A()" << " this = " << this << endl;
}
