#include<iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, sum = 0;
//	int c = a + b;
	for( ; b <= 4000000; )
	{
//		cout << a << " " << b << " "<< c << endl;
		int temp;
		if (b % 2 == 0)
			sum += b;
		int c = a + b;
 		a = b;
		b = c;
			}
	cout << sum;
}
		
