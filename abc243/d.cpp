#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    unsigned long long x;
    cin >> n >> x;
    string s = "";
    char c;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'U')
        {
            if (s == "")
            {
                // printf("/2\n");
                x = x / 2;
            }
            else
            {
                length -= 1;
                // printf("poped\n");
                s.pop_back();
            }
        }
        else
        {
            length++;
            // printf("append %c\n", c);
            s.push_back(c);
        }
    }
    // cout << s <<endl;
    // printf("len %d\n", length);
    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'L')
        {
            x = x * 2;
            // printf("L so %llu\n", x);
        }
        else
        {
            x = x * 2 + 1;
            // printf("R so %llu\n", x);
        }
    }

    cout << x << endl;
    return 0;
}