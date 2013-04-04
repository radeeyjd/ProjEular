#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	for(int iii = 0; iii < 999; iii++)
	{
		for(int jjj = 0; jjj < 1000; jjj++)
		{
			a = iii;
			b = jjj;
			c = 1000 - a - b;
			if(a < b && b < c)
			if ((a + b + c) == 1000)
			if(pow(a,2) + pow(b,2) == pow(c,2))
			cout << (a * b * c)<< endl;
		}
	}
	}
