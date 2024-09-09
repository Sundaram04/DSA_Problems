#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    int iniS = 0;
    for(int i=0; i < n; i++){
        for(int j=0; j < n-i; j++){
            cout << "*";
        }
        for(int j=0; j< iniS; j++){
            cout << " ";
        }
        for(int j=0; j < n-i; j++){
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
    iniS = 2*n-2;
    for(int i=0; i<n; i++){
        for(int j=0; j <= i; j++){
            cout << "*";
        }
        for(int j=0; j<iniS; j++){
            cout << " ";
        }
        for(int j=0; j <= i; j++){
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}


int main() {
    int x;
    cin >> x;
    pattern(x);
}