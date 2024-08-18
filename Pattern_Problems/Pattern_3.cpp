#include<bits/stdc++.h>
using namespace std;

void sq_pattern(int x) {
    for(int i = 0; i < x; i++) {
        for(int j = 1; j <= i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    sq_pattern(n);
}
