#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int result = 0;	
	for(int iii = 999; iii > 0; iii --)
	{	
		for(int jjj = 999; jjj > 0; jjj --)
		{
			int prod = iii * jjj;
			ostringstream ss;
			ss << prod; 
			string b,a;
			a = ss.str();
			b = string(a.rbegin(), a.rend());
			int a1, b1;
			a1 = atoi(a.c_str());
			b1 = atoi(b.c_str());			
//			cout << a << " " << b << endl;
//		    cout << a1 << " "<< b1 << endl;	
			if(a1 == b1)
			{
				if(prod > result)
				{
				//cout << prod << endl;
				result = prod;
				}
				
			}
		}
	}
		cout << result << endl;
	
/*	for(int iii = 1000000; iii > 1; iii--)
	{
		string a;
		string* b;
		a = static_cast<string>(iii);
		b = &string(a.rbegin(), a.rend());
		int plnd = atoi(b);
		if(iii == plnd)
		{
		plndrmes.push_back(iii);
		cout << iii << endl;
		}
		
	}*/




}
