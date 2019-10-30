//1158

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, count, i;
	
	while (cin >> x && x != 0)
	{
		count = 0;
		i = 0;
		
		if (x % 2 != 0)
			x++;
			
		for (i = 0; i < 5; i++)
		{
			count += x;
			x += 2;
		}
		cout << count << endl;
	}
	
	return 0;
}
