#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    bool found = false;

    for (int digit = 0; digit <= 9; digit++)
    {
        if ((a * 10 + digit) % b == 0) {
            found = true;
            cout << a << digit;

            for (int i = 0; i < n - 1; i++)
            {
                cout << 0;

            }
            break;  
        }
    }
      if(!found) {
            cout<<-1;
        }
    return 0;
}