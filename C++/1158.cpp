//1158

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x, y, i, j, count, qtd;
	
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		count = 0;
		qtd = 0;
		j = 0;
		cin >> x >> y;
		while (qtd < y)
		{
			if ((x + j) % 2 != 0)
			{
				count += x + j;
				qtd++;
			}
			j++;
		}
		cout << count << endl;
	}
	
	return 0;
}
