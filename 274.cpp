#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, i, j, m = 3, buff;

	cin >> n;
	int x[n];

	for(i = 0; i < n; i++) {
		cin >> x[i];
	}

	for(j = 0; j < n - 1; j++) {
		for(i = j + 1; i < n; i++) {
			if(x[j] < x[i]) {

			    // Schimbăm x[i]cu x[j]
			    
 				buff = x[j];
				x[j] = x[i];
				x[i] = buff;
			}
		}
	}

	for(j = n - m; j < n; j++) {
		cout << x[j] << " ";	
	}

	return 0;
}
