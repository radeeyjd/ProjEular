#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifs;
	ifs.open("grid", ifstream::in);
	int t;
	int a[20][20];
	int i, j;
	i = 0; j = 0;
	ifs >> t;
	while(ifs.good()) {
		a[i][j] = t;
		j = (j + 1) % 20;
		if ( j == 0)
			i = (i + 1) % 20;
		ifs >> t;
	}
	ifs.close();
	int prod, maxprod;
	prod = 0;
	maxprod = 0;
	for( i = 0; i < 20; i++) {
		for( j = 0; j < 20; j++) { 
			//down
			if( i + 3 < 20) {
				prod = a[i][j] * a[i + 1][j] * a[i + 2][j] * a[i + 3][j];
				if (prod > maxprod)
					maxprod = prod;
			}
			//right
			if( j + 3 < 20) {
				prod = a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
				if(prod > maxprod)
					maxprod = prod;
			}
			//diagonal
			if( i + 3 < 20 && j + 3 < 20) {
				prod = a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3];
				if(prod > maxprod)
					maxprod = prod;
				if(a[i][j] == 26)
					cout << prod << endl;

			}
			//diagoanal1
			if( i + 3 < 20 && j - 3 >= 0) {
				prod = a[i][j] * a[i + 1][j - 1] * a[i + 2][j - 2] * a[i + 3][j - 3];	
				if(prod > maxprod)
					maxprod = prod;
			}
			//diagonal 2
			if( i - 3 >=0 && j + 3 < 20) {
				prod = a[i][j] * a[i - 1][j + 1] * a[i - 2][j + 2] * a[i - 3][j + 3];
				if(prod > maxprod)
					maxprod = prod;
			}			
		}
	} 
	cout << maxprod << endl;			
}
