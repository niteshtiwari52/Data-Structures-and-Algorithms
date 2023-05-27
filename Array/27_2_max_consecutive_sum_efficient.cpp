/**
 *
 *
 * Problem : WAP to print the max consecutive sum of the array
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

int maxConsecutiveSum(int arr[], int n, int k)
{
    int curr_sum = 0;
    // calculating sum of the first window
    for (int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;

    // now start with the end of the 2nd window element
    for (int i = k; i < n; i++)
    {
        curr_sum += (arr[i] - arr[i - k]);
        max_sum = max(curr_sum, max_sum);
    }

    return max_sum;
}

int main()
{
    // write your code here
    // Time Complexity
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "the max_sum of " << k << " element is  = " << maxConsecutiveSum(arr, n, k);
    return 0;
}