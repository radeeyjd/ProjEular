#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	int num;
	vector<int> nums;
	FILE *pFile;
	pFile = fopen("inputfile","r");
	do {
		num = getc(pFile);
	    nums.push_back(num);	
	}while(num != EOF);
	fclose(pFile);

	int max = 0;
	int vSize = nums.size();
	for(int iii = 0; iii < vSize; iii++)
	{
		int prod = nums[iii];
		for(int jjj = iii+1; jjj < iii + 5; jjj++)
		{
			prod *= nums[jjj];	
		}
		if(prod > max)
			max = prod;
	}

	cout << max << endl;

for(int iii = 0; iii < nums.size(); iii++)
	cout << nums[iii] << endl;

}
	



