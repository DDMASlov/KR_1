#include "autotest.hpp"
int autotest()
{
    if(autotest1() && autotest2() && autotest3() == 1)
    {
	cout << "Autotests passed" << endl;
	return 0;
    }
    else
    {
	cout << "Autotests failed!!" << endl;
	return 1;
    }
}
int autotest1()
{
    CIntN a(234), b(111);
    CIntN sum = a+b;
    CIntN dif = a-b;
    CIntN cmsum(345);
    CIntN cmdif(123);
    if((sum.Compare(cmsum)) && (dif.Compare(cmdif)))
	return 1;
    else
	return 0;
}
int autotest2()
{
    CIntN a(334), b(334);
    CIntN sum = a+b;
    CIntN dif = a-b;
    CIntN cmsum(668);
    CIntN cmdif(0);
    if((sum.Compare(cmsum)) && (dif.Compare(cmdif)))
	return 1;
    else
	return 0;
}
int autotest3()
{
    CIntN a(132), b(123);
    CIntN sum = a+b;
    CIntN dif = a-b;
    CIntN cmsum(255);
    CIntN cmdif(9);
    if((sum.Compare(cmsum)) && (dif.Compare(cmdif)))
	return 1;
    else
	return 0;
}