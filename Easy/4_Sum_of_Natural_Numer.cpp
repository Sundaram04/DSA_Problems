#include<iostream>
using namespace std;

// Average Solution

long long sumOfNaturalNumber(int n) {
    if(n==1) return 1;
    return n + sumOfNaturalNumber(n-1);
}

// Optimal Solution

long long sumOfNaturalNumbers(int n) {
    return (long long)n * (n + 1) / 2;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << sumOfNaturalNumbers(a);
}