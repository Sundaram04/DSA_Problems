#include<bits/stdc++.h>
using namespace std;

void sq_pattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int x;
    cin >> x;
    sq_pattern(x);
}
