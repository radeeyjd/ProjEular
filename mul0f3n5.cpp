#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for(int iii = 0; iii < 1000; iii++)
		if(iii%3 == 0 || iii%5 == 0)
			sum = sum + iii;
	cout << sum;
}
