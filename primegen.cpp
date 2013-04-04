#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int prime = 2;
	int primes[10000];
	primes[0] = 2;

	for(int iii = 1; iii < 10001; iii++)
	{
		for(int jjj = primes[iii-1] + 1; ;jjj++)
		{
			bool no = 0;
			for(int kkk = sqrt(jjj); kkk >= 2; kkk--)
			{
				if(jjj%kkk == 0)
				no = 1;
			}
			if(!no)
			{
			primes[iii] = jjj;
			break;
			}
		
		}
	}
//	for(int iii = 0; iii < 20; iii++)
//	cout << primes[iii] << endl;	
	cout << primes[10000];
}
