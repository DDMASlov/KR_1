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
};