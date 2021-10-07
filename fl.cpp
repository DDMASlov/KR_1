<<<<<<< HEAD
#include "class.hpp"
int main()
=======
#define N 3
#include "class.hpp"
int main(void)
>>>>>>> main
{
    if(autotest() == 0)
    {
	int frst, scnd;
<<<<<<< HEAD
	int i = 0, x, y;
=======
	int i = 0;
>>>>>>> main
	int max = 1,min = 1;
	while (i < N)
	{
	    max = max*10;
	    i++;
	}
	min = max/10;
	cout << "Enter first " << N << " digit number:";
	cin >> frst;
	if((frst < 0) || (frst >= max) || (frst < min))
	{
	    cout << "Wrong number" << endl;
	    return -1;
	}
	cout << "Enter second " << N <<" digit number:";
	cin >> scnd;
	if((scnd < 0) || (scnd >=max) || (scnd < min))
	{
	    cout << "Wrong number" << endl;
	    return -1;
	}
	CIntN a(frst),b(scnd);
	CIntN c = a + b;
	CIntN d = a - b;
	cout << "Sum of numbers:";
	c.GetNum();
	cout << "Difference of numbers:";
	d.GetNum();
	return 0;
    }
    else
    {
	return 0;
    }
}