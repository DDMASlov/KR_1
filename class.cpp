#include "class.hpp"
CIntN::CIntN()
{
    for(int i = 0; i < N;i++)
	numbr[i] = 0;
}
CIntN::CIntN(const int f)
{
    int h = f;
    for(int i = 0;i < N;i++)
    {
	numbr[i] = h / pow(10,N-1-i);
	h = h - numbr[i]*pow(10,N-1-i);
    }
}
CIntN CIntN::operator+(const CIntN &other)
{
    CIntN rezs;
    for(int i = 0;i < N;i++)
    {
	rezs.numbr[i] = numbr[i] + other.numbr[i];
    }
    for(int i = N-1;i > 0 ;i--)
    {
	if(rezs.numbr[i] >= 10 )
	{
	    rezs.numbr[i] -= 10;
	    rezs.numbr[i-1] += 1;
	}
    }
    if(rezs.numbr[0] >= 10)
	rezs.numbr[0] = -1;
    return rezs;
}
CIntN CIntN::operator-(const CIntN &other)
{
    CIntN rezd;
    int cnt = 0,k = 0;
    while(k < N)
    {
	if(numbr[k] > other.numbr[k])
	    k = N;
	else
	{
	    if(numbr[k] < other.numbr[k])
	    {
		cnt = 1;
		k = N;
	    }
	    k++;
	}
    }
    if(cnt != 1)
    {
	for(int i = N-1;i >= 0;i--)
	{
	    if(numbr[i] < other.numbr[i])
	    {
		rezd.numbr[i] = 10 + numbr[i] - other.numbr[i];
		numbr[i-1] = numbr[i-1] - 1;
	    }
	    else
		rezd.numbr[i] = numbr[i] - other.numbr[i];
	}
    }
    else
    {
	for(int i = N-1;i >= 0;i--)
	{
	    rezd.numbr[i] = other.numbr[i] - numbr[i];
	}
	rezd.numbr[0] = (-1)*rezd.numbr[0];
    }
    return rezd;
}
void CIntN::GetNum()
{
    if(numbr[0] < 0)
    {
	cout << " OUT of unsigned numbers" << endl;
    }
    else
    {
	for(int i = 0;i < N;i++)
	{
	    cout << numbr[i];
	}
	cout << endl;
    }
}
int CIntN::Compare(const CIntN &other)
{
    for(int i = 0;i < N;i++)
    {
	if(numbr[i] != other.numbr[i])
	    return 0;
    }
    return 1;
}
