#include<bits/stdc++.h>
using namespace std;
int main (){
    int num;
    cin>>num;

    if (num == 0) {
        cout<<0;
    }
    else if( num % 9 == 0) {
        cout << 9;
    } 
    else {
        cout << num % 9;
    }
}