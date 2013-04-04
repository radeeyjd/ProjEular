#include <iostream>

using namespace std;

int main()
{
	long x, y, z;
	int n = 100;
	x = (n*(n+1)/2);
	y = (n*(n+1)*(2*n+1))/6;
	z = x*x - y;	 
	cout << z << endl;
	return 0;
}
