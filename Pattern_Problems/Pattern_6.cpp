#include<bits/stdc++.h>
using namespace std;

void sq_pattern(int n) {
    for(int i = 0; i < 5; i++) {
        for(int j =0; j < 5 - i; j++) {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main() {
    int x;
    cin >> x;
    sq_pattern(x);
}
