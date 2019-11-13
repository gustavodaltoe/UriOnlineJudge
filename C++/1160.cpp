#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, PA, PB, anos;
    float G1, G2;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        anos = 0;
        cin >> PA >> PB >> G1 >> G2;
        while(PA <= PB && anos <= 100)
        {
            PA = PA + PA * (G1 / 100);
            PB = PB + PB * (G2 / 100);
            anos++;
        }
        if (anos > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << anos << " anos." << endl;
    }
    return 0;
}
s
