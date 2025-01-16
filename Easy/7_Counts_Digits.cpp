#include <iostream>
#include <string>
using namespace std;

// Brute Force
int countDigits_brute(int num)
{
    string str = to_string(num);
    cout << "The number of digits in " << num << " is : " << str.size();
    return 0;
}

#include <math.h>
// Average Case
int countDigits_avg(int num)
{
    if (num == 0)
        cout << "The number of digits" << 1;
    else
    {
        cout << "The number of digits in " << num << " is : " << floor(log10(abs(num))) + 1;
        return 0;
    }
}

// Optimal Solution
int countDigits_opt(int num)
{
    int count = 0;
    if (num == 0)
    {
        count = 1;
        cout << "The number of digits" << count;
    }
    int temp = num;
    num = abs(num);

    while (num > 0)
    {
        // int lastDig = num % 10;
        num = num / 10;
        count++;
    }
    cout << "The number of digits in " << temp << " is : " << count;
    return 0;
}

int main()
{
    // defining variable and taking user input
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // function call
    countDigits_opt(n);
}