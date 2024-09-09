#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int i=0; i<n; i++) {
        for(int j=0; j< n-1-i; j++) {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int k=0; k< (2*i+1); k++){
            cout << ch;
            if(k < breakpoint ) ch++;
            else ch--;
        }
        for(int j=0; j< n-1-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}


int main() {
    int x;
    cin >> x;
    pattern(x);
}