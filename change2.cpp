#include <iostream>
using namespace std;

int main() {
	int target = 200;
	int coinSizes[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
	int ways[201];
	ways[0] = 1;
 
	for (int i = 0; i < 8; i++) {
    	for (int j = coinSizes[i]; j <= target; j++) {
	        ways[j] += ways[j - coinSizes[i]];
    	}
	}
	cout << ways[200];
}
