//Name :    M.Ibrahim
//roll No : 13i-1821
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "LongInt.h"
using namespace std;
int main()
{
    string num1;
    cout << "Enter the number :";
    getline(cin, num1);
    LongInt x(num1), y, z;

    y = x;
    z = x + y;
    cout << x << endl
         << y << endl;

    cout << z << endl;
    return 0;
}
