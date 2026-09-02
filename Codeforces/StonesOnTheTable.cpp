#include <bits/stdc++.h>
using namespace std;
int main () {
    int stones;
    cin>>stones;
    string s;
    cin>>s;
    int count = 0;

    for(int i = 0; i <= s.size()-1; i++) {
       
         if(s[i]== s[i+1]) {
             count = count + 1;
         }
    }
    cout<< count;
    return 0;

}