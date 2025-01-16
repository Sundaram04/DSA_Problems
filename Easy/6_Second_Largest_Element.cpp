#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Brute Force
int secondLargest(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    cout << endl
         << "The sorted array is: ";
    for (int num : nums)
    {
        cout << num << " ";
    }

    if (nums.size() == 2)
    {
        cout << endl
             << "The second largest element of the array is: " << min(nums[0], nums[1]);
    }
    else
    {
        cout << endl
             << "The second largest element of the array is : " << nums[nums.size() - 2];
        return 0;
    }
}

// Optimal code
int secondLargest_2(vector<int> nums)
{
    int largest = INT16_MIN;
    int secondLargest = INT16_MIN;
    
    for (int num : nums)
    {
        if(num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num < largest && num > secondLargest)
        {
            secondLargest = num;
        }
        
    }

    if (secondLargest == INT16_MIN)
    {
        cout << endl
             << "No second largest element found (all elements might be the same or array is too small).";
    } else {
            sort(nums.begin(), nums.end());
            cout << endl
                 << "Sorted array";
            for (int num : nums)
            {
                cout << num << " ";
            }
        cout << endl
             << "The second largest element of the array is: " << secondLargest;
    }
}

int main()
{
    int n;
    // size of array
    cout << "Enter the size of array: ";
    cin >> n;

    if (n<2)
    {
        cout << "Array must have at least two elements to find the second largest.";
        return 0;
    }
    

    // define array
    vector<int> nums(n);

    // user input
    cout << "Enter " << n << " elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // display of array
    cout << "The array is : ";
    for (int num : nums)
    {
        cout << num << " ";
    }

    // calling of the function
    secondLargest_2(nums);

    return 0;
}
