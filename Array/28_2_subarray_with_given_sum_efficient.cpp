/**
 *
 *
 * Problem : Given a unsorted array of non-negative integers. Find if there is a subarray with given sum
 *
 *
 */
#include <iostream>

using namespace std;

/***
 * Efficient Approach - Window sliding Technique
 *
 * Time : O(n)
 * Space :
 *
 *
 */

int maxConsecutiveSum(int arr[], int n, int given_sum)
{
    // start with first window
    int curr_sum = arr[0], s = 0;

    for (int e = 1; e < n; e++)
    {
        // clear the prev window
        while (curr_sum > given_sum && s < e - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == given_sum)
        {
            return true;
        }
        if (e < n)
        {
            curr_sum += arr[e];
        }
    }
    return (curr_sum == given_sum);
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int given_sum = 45;
    cout << maxConsecutiveSum(arr, n, given_sum);
    return 0;
}