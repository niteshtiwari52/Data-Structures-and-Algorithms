// Problem : WAP that return the max consecutive 1's in an binary array .

#include <iostream>
#include <vector>
using namespace std;
// Time complexity = O(n^2)
// Space Complexity = O(1)

int maximum_Consecutive_Ones(vector<int> &arr)
{
    int n = arr.size();
    int total_max_consecutive_ones = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = 0;

        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                curr++;
            }
            else
                break;
        }
        total_max_consecutive_ones = max(total_max_consecutive_ones, curr);
    }
    return total_max_consecutive_ones;
}
int main()
{
    vector<int> arr = {1, 0, 1, 1, 1, 0, 1};
    cout << maximum_Consecutive_Ones(arr);
    return 0;
}