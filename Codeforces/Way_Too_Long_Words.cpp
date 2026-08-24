#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++) {
        
        string s;
        cin>>s;

        int length = s.length();

        if (length>10) {
            char first = s[0];
            int middle = length-2;
            char last = s[length - 1];
            
            cout<<first<<middle<<last<<endl;
        }
        else {
            cout<< s <<endl;

        }

    }
    return 0;
}