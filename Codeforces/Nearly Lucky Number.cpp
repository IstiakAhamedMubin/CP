#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a;
    cin>>a;
    string s = to_string (a);
    int lucky_count = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '7'|| s[i] == '4') {
            lucky_count ++;
        }
    }
    if(lucky_count == 7 || lucky_count == 4) {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }return 0;
}