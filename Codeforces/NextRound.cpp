#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,k;
    cin >> n >>k;

    int scores[50];

    for (int i = 0; i<n; i++) {
        cin>>scores[i];
    }
     int CutoffScore = scores[k-1];

     int count = 0;

     for ( int i = 0; i<n; i++) {
        if (CutoffScore <= scores[i] && scores[i]>0 ) {
            count++;
        }

     }
     cout<<count<<endl;

     return 0;

}