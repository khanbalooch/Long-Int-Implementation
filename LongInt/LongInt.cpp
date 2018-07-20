//Name :    M.Ibrahim
//roll No : 13i-1821

#include "LongInt.h"

istream &operator>>(istream &in, LongInt &l)
{
	cout << "Enter the Number: ";
	in.getline(l.arr, 1000);
	return in;
}
ostream &operator<<(ostream &out, LongInt &l)
{
	l.Display();
	return out;
}
/*_________________________________________________________________*/
LongInt &LongInt::operator=(const LongInt &l)
{
	int x;
	for (int i = 0; l.arr[i] - 48 == 0; i++)
	{
		x = i;
	}
	for (int i = x + 1; i < 1000; i++)
	{
		arr[i] = l.arr[i];
	}
}
/*____________________________________________________________________*/
void LongInt::Display()
{
	int x;
	for (int i = 0; arr[i] == 0; i++)
	{
		x = i;
	}
	for (int i = x + 1; i < 1000; i++)
	{
		cout << static_cast<int>(arr[i]) - 48;
	}
}
/*______________________________________________________________________*/
LongInt LongInt::operator+(const LongInt &l)
{
	int carry = 0;
	LongInt t;
	for (int i = 999; i > -1; i--)
	{
		if (arr[i] - 48 + l.arr[i] - 48 + carry < 10)
		{

			t.arr[i] = int(arr[i]) + int(l.arr[i]) + carry;

			carry = 0;
		}
		else
		{

			t.arr[i] = int(arr[i]) + int(l.arr[i]) + carry - 10;

			carry = 1;
		}
	}

	return t;
}
