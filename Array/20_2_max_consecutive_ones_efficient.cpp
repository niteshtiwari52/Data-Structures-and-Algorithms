// Problem : WAP that return the max consecutive 1's in an binary array .

#include <iostream>
#include <vector>
using namespace std;
// Time complexity = O(n)
// Space Complexity = O(1)

int maximum_Consecutive_Ones(vector<int> &arr)
{
    int n = arr.size();
    int total_max_consecutive_ones = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            total_max_consecutive_ones = max(curr, total_max_consecutive_ones);
        }
    }
    return total_max_consecutive_ones;
}
int main()
{
    vector<int> arr = {1, 0, 1, 1, 1, 1, 0, 1};
    cout << maximum_Consecutive_Ones(arr);
    return 0;
}