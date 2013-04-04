#include <iostream>
using namespace std;

int main()
{
	for( int iii = 20; ; iii++)
	{
		bool no = 0;
		for(int jjj = 2; jjj < 21; jjj++)
		{
			if(iii%jjj != 0)
				no = 1;
		}
	if(no == 0)
	{
		cout << iii << endl;
		return 0;
	}
	}
}
