#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int i=0; i<n; i++) {
            char temp ='A'+i;
        for(int ch = 0; ch <= i; ch++){
            cout << temp << " ";
            
        }
    
        cout << endl;
    }
}


int main() {
    int x;
    cin >> x;
    pattern(x);
}