#include<iostream>
using namespace std;


// Optimal Solution 

bool isPalindrome(int n) {
    int lastdigit;
    int newNum = 0;
    int temp = n;
    while (n > 0) {
        lastdigit = n % 10;
        newNum = newNum * 10 + lastdigit;
        n = n / 10;
    }
    return temp == newNum;
}

int main() {
    int a;
    cout << "Enter a number ";
    cin >> a;
    bool x =  isPalindrome(a);
    cout << boolalpha << x;
}