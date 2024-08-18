#include<bits/stdc++.h>
using namespace std;

void sq_pattern(int n) {
    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int x;
    cin >> x;
    sq_pattern(x);
}
