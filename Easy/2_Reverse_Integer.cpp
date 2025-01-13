#include <iostream>
using namespace std;


// Optimal Solution

int reverseInteger(int n){
    int lastDigit;
    int newNum = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        newNum = newNum * 10 + lastDigit;
        n = n/10;
    }
    return newNum;
}
int main(){
    int a;
    cout << "Enter a number to reverse";
    cin >> a;
    cout << reverseInteger(a);
}