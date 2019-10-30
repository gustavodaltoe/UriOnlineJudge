//1156

#include <bits/stdc++.h>

using namespace std;

int main() {
	int i;
	float s = 0;
	
	for (i = 0; i <= 39; i += 2)
		s += (i + 1.0) / pow(2, i / 2);
	
	cout << setprecision(2) 
		 << fixed
		 << s << endl;
		 
	return 0;
}
