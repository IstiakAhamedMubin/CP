#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,minimum_step;
    cin>> x;

    if(x % 5 == 0) {
       minimum_step = x / 5;
    }
    else{
        minimum_step = x/5 +1;
    }
    cout<< minimum_step;
    return 0;
}