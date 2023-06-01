/**
 * Problem : Given an array of integers , find if it has the equilibrium point
 *
 */
#include <iostream>
#include <vector>

using namespace std;

/***
 * Efficient Approach - Prefix sum
 *
 * Time : O(n)
 * Space : O(1)
 *
 *
 */

bool isEquilibrium(int arr[], int n)
{
    // calculate the all sum
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int l_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (l_sum == sum - arr[i])
        {
            return true;
        }
        l_sum += arr[i];
        sum -= arr[i];
    }
    return false;
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << isEquilibrium(arr, n);
    return 0;
}