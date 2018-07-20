//Name :    M.Ibrahim
//roll No : 13i-1821

#ifndef IBRAHIM
#define IBRAHIM
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

class LongInt
{

    char arr[1000];

  public:
    LongInt()
    {
        for (int i = 0; i < 1000; i++)
        {
            arr[i] = 0;
        }
    }

    LongInt(string num)
    { //////////////////
        int x = num.length();
        int z = x;
        for (int i = 0; i < x; i++)
        {
            arr[999 - i] = num[z - 1];
            z--;
        }
        for (int i = 0; i < 1000 - x; i++)
        {
            arr[i] = 0;
        }
    }
    /*_____________________________________________*/
    void Display();

    LongInt &operator=(const LongInt &l);
    LongInt operator+(const LongInt &l);
    friend istream &operator>>(istream &in, LongInt &l);
    friend ostream &operator<<(ostream &out, LongInt &l);
};
#endif
