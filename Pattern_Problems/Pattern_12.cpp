#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int i = 0; i < n; i++) {
        for(int k=0; k<=i; k++) {
            cout << k+1;
        }
        for(int j = 0; j < (n-1-i)*2; j++){
            cout << "-";
        }
        for(int l=i+1; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
    }
}


int main() {
    int x;
    cin >> x;
    pattern(x);
}