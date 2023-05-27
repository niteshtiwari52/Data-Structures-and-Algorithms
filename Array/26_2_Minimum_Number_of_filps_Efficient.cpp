// Problem :
#include <iostream>
using namespace std;

// Time : O(n)
// Space :O(1)
void minimumFlips(bool arr[], int n)
{
    // start with 2nd group or 2nd element
    for (int i = 1; i < n; i++)
    {
        // check previous element is diffrent
        if (arr[i] != arr[i - 1])
        {
            // also check diff from first element
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << (i - 1) << endl;
            }
        }
    }
    // if last element is diffrent from 1st element
    if (arr[n - 1] != arr[0])
    {
        cout << (n - 1) << endl;
    }
}

int main()
{
    // write your code here
    // Time Complexity
    bool arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    minimumFlips(arr, n);
    // cout << "index of majority element = " << minimumFlips(arr, n);
    return 0;
}