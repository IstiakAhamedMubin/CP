#include <iostream>
using namespace std;
int main () {
    string Borze;
    cin>> Borze;
       for (int i =0; i < Borze.size(); i++) {
        if( Borze [i] == '.'){
            cout<< "0";
        }
        else  {
            if (Borze[i+1] == '.') {
                cout<< "1";
            }
            else{
                cout<<"2";
            }
            i++;
        }
    }
    return 0;
}
