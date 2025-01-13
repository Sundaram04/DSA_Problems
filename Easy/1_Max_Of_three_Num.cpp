#include <iostream>
using namespace std;


// Brute Force solution

int maximumOfThree_BF(int a, int b, int c){
    if (a>b)
    {
        if (a>c)
        {
            return a;
        } else
        {
            return c;
        }
    } else{
        if (b>c)
        {
            return b;
        } else{
            return c;
        }
    }
    
    
}


// Optimal Solution 
// use of built-in max() function 

#include <algorithm>
int maximumOfThree_OP(int a, int b, int c) {
    return max(a, max(b, c));
}


int main(){
    int a, b, c;
    cout << "Enter three number:";
    cin >> a >> b >> c;
    cout << "The maximum of three number is " ;
    cout << maximumOfThree_BF(a, b, c);
    cout << endl << "The maximum of three number is ";
    cout << maximumOfThree_OP(a, b, c);
}
