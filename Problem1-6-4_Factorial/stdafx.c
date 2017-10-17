// stdafx.cpp : source file that includes just the standard includes
// Problem1-6-4_Factorial.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

unsigned int FindFactorial(unsigned int n)
{
	if (n < 0)
	{
		return NAN;
	}
	unsigned int factorial = 1;
	for (size_t i = 0; i < n; i++)
	{
		factorial *= (i + 1);
	}
	return factorial;
}

