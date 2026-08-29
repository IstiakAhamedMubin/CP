#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    string sequence;
    cin>> sequence;
    for(int i =0;i<t;i++) {
        for(int j=0;j<sequence.size() - 1 ;j++) {
            if(sequence[j] == 'B' && sequence[j+1] == 'G') {
                   sequence [j] = 'G';
                   sequence [j+1] = 'B';
                   j++;
            }
        }
    }cout<<sequence<<endl;
}
