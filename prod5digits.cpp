#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;	

int main() {
	int number[1000], max, prod;
	int iii = 0;
	ifstream ifs;			//Stored the digits in the file
	ifs.open("data");
	while(ifs.good()) {
		char buf;
		ifs >> buf;
		number[iii++] = atoi(&buf);
	}
	max = 0;
	for(int jjj = 0; jjj < 994; jjj++) {	//Traverse through the numbers and store current max
		prod = number[jjj] * number[jjj + 1] * number[jjj+2] * number[jjj + 3] * number[jjj +4];
		if(prod > max) {	//Update the current max
			max = prod;
		}
	}
	cout << max; 
}

