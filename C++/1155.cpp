//1155

#include <bits/stdc++.h>

using namespace std;

int main() {
	int i;
	float s = 0;
	
	for (i = 1; i <= 100; i++)
		s += 1.0 / (float)i;
	
	cout << setprecision(2) 
		 << fixed
		 << s << endl;
		 
	return 0;
}
