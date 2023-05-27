// Problem :
#include <iostream>
using namespace std;
// Time : O(n^2)
int findMajority(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return nums[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {8, 8, 6, 6, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "index of majority element = " << findMajority(arr, n);
    return 0;
}