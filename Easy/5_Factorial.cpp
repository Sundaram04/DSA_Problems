#include<iostream>
using namespace std;


// Optimal Solution

long long factorial(int n) {
    if (n==0)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << factorial(a);
}