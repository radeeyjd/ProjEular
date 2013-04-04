#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int sum = 0;

	for(int iii = 2; iii < 8000; iii++) {	

		bool notprime = 0;
		for(int jjj = 2; jjj <= iii/2; jjj++) {
			if(iii % jjj == 0) {
				notprime = 1;
				break;
			}
		}
	if(!notprime) {
		sum += iii;
		cout << iii << endl;
	}
	}
cout << sum << endl;

}
