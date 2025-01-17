#include<iostream>
using namespace std;

// Iterative Approach 
int gcdIterative(int a, int b){
    while (b != 0)
    {
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
    
}

// Recursive Approach 
int gcdRecursive(int a, int b){
    if(b == 0) return a;
    return gcdRecursive(b, a%b);
}

// Brute Force
int gcdBrute(int a, int b){
    int gcd = 1;
    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        
    }
    return gcd;
    
}

int main(){
    int x, y;
    cout << "Enter two number : ";
    cin >> x >> y;

    int res = gcdIterative(x, y);
    cout << "The gcd of " << x << " & " << y << " is : " << res;

}