#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, min, max, minI, maxI, i, buff;

	cin >> n;
	int x[n];

	for(i = 0; i < n; i++) {
		cin >> x[i];
	}

	min = x[0];
	max = x[0];

	for(i = 0; i < n; i++) {

	    // Aflăm minim
		if(x[i] < min) {
			min = x[i];
			minI = i;
		}

		// Aflăm maxim
		if(x[i] > max) {
			max = x[i];
			maxI = i;
		}
	}

	if(minI > maxI) {
		// Ordine inversă
		buff = minI;
		minI = maxI;
		maxI = buff;
	}

	for(i = minI; i <= maxI; i++) {
		cout << x[i] << " ";	
	}

	return 0;
}
