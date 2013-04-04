#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long int a = 103170187;
	long int b = a/2;

	for( ; b > 2; b--) { //cout << b << " ";
		if (a % b == 0 && !(b % 2 ==0) && !(b % 3 == 0) && !(b % 7 == 0))
		{
//			cout << b << endl;
			int i = 0;			
			for(long int iii = 2; iii < b-1 && i != 1; iii++)
			{
				cout << b << " " << i << endl;
	     		i = 0;
				if(b % iii == 0)
				{	i = 1; i++; break; }
			}
			cout << b << " fck " << i <<endl;
			if(i == 0)
				{ cout << " Wrong" << b << endl; return 0; }
		}
	}
	return 0;
}
		
			                                                                              
