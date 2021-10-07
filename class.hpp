<<<<<<< HEAD
#define N 3
#include "fl.hpp"
class CIntN
{
private:
    int numbr[N];
public:
    CIntN();
    CIntN(const int f);
    CIntN operator+(const CIntN &other);
    CIntN operator-(const CIntN &other);
    void GetNum();
    int Compare(const CIntN &other);
=======
#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;
int autotest();
class CIntN
{
private:
    int numbr;
public:
    CIntN(){}
    CIntN(int f)
    {
	numbr = f;
    }
    CIntN operator+(const CIntN &other)
    {
	CIntN rezs;
	rezs.numbr = numbr + other.numbr;
	return rezs;
    }
    CIntN operator-(const CIntN &other)
    {
	CIntN rezd;
	rezd.numbr = numbr - other.numbr;
	return rezd;
    }
    int GetNum() const
    {
	if(numbr < 0)
	{
	    cout << "Out of unsigned numbers" << endl;
	}
	else
	{
	    cout << numbr << endl;
	}
    }
    int Compare(const CIntN &other)
    {
	if(numbr == other.numbr)
	    return 1;
	else
	    return 0;
    }
>>>>>>> main
};