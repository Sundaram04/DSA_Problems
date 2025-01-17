#include<iostream>
#include<math.h>
using namespace std;

int primeFactor(int num){
    // For num smaller and equal to 1
    if(num <= 1){
        cout << "! & negative does not have prime factor";
        return 0;
    }

    // check for even num
    while (num % 2 == 0){
        cout << 2 << " ";
        num = num / 2;
    }

    // check for odd
    for (int i = 3; i < sqrt(num); i += 2){
        while (num % i == 0)
        {
            cout << i << " ";
            num = num / i;
        }
    }

    // if still greater than 2
    if(num > 2){
        cout << num;
    }
}

int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;

    cout << "The Prime factor of " << a << " are : " ;
    primeFactor(a);
    return 0;

}