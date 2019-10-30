//1154

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, count = 0;
	float media;
	
	while (cin >> a && a >= 0) 
	{
		media += a;
		count++;
	}
	media /= (float)count;
	
	cout << setprecision(2) 
		 << fixed
		 << media << endl;
		 
	return 0;
}
