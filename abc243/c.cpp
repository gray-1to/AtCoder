#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n], yNum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        yNum[y[i]]++;
    }
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // cout << "check" << i << j;
            if (y[i] == y[j])
            {
                // cout << i << j << "same" << endl;
                if ((x[i] < x[j]) && (s[i] == 'R') && (s[j] == 'L'))
                {
                    cout << "Yes" << endl;
                    return 0;
                }
                if ((x[i] > x[j]) && (s[i] == 'L') && (s[j] == 'R'))
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }


    cout << "No" << endl;
    return 0;
}