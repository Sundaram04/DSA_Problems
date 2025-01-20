#include<iostream>
#include<vector>
using namespace std;

vector<int> generateFibonacci(int n){
    if (n == 0) return {};
    else if(n == 1) return {0};

    vector<int> fib(n);
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<n; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }
    return fib;
}

int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    vector<int> res = generateFibonacci(a);
    cout << "The Fibonacci sequence upto " << a << " are ";
    for(int num: res){
        cout << num << " ";
    }
    return 0;
}