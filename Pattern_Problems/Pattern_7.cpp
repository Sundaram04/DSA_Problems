#include<bits/stdc++.h>
using namespace std;
 
void pattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5-i-1; j++) {
            cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++) {
            cout << "*";
        }
        for(int j = 0; j < 5-i-1; j++) {
            cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    int x;
    cin >> x;
    pattern(x);
}
