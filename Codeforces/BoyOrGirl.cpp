#include <bits/stdc++.h>
using namespace std;
int main () {
    string name;
    cin>>name;
    set<char>nameSet;

    for (int i = 0; i < name.length(); i++) {
        nameSet.insert(name[i]);
    }
    if(nameSet.size() % 2 == 0) {
        cout<< "CHAT WITH HER!";

    }
    else {
        cout<<"IGNORE HIM!";
    }
}