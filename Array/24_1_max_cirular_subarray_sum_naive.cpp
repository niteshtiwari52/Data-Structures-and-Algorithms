// Problem : maximum sum of a circular subarray

#include <iostream>
using namespace std;
// time complexity : O(n^2)
int max_sum_of_circular_subarray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];

        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
            cout << "i = " << i << ", j =" << j << ", Index = " << index << endl;
            cout << "curr_sum = " << curr_sum << " , curr_max = " << curr_max << endl;
        }
        res = max(curr_max, res);
        cout << "res = " << res << endl;
    }
    return res;
}
int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << max_sum_of_circular_subarray(arr, n);
    return 0;
}