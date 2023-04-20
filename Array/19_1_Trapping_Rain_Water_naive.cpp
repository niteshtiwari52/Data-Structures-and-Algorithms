// Problem : Trapping Rain water
#include <iostream>
#include <vector>
using namespace std;
// Time complexity = O(n^2)
int getMaximumWaterCanTrap(vector<int> &arr)
{
    int totalWater = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // finding the maximum vlaue to the left side and right side
        int L_Max = arr[i], R_Max = arr[i];
        // finding the maximum on the left side
        for (int j = 0; j < i; j++)
        {
            L_Max = max(L_Max, arr[j]);
        }
        // finding the maximum on the right side
        for (int j = 0; j < arr.size(); j++)
        {
            R_Max = max(R_Max, arr[j]);
        }
        totalWater = totalWater + min(L_Max, R_Max) - arr[i];
    }
    return totalWater;
}
int main()
{

    // Time Complexity
    vector<int> arr = {3, 0, 1, 2, 5};
    cout << getMaximumWaterCanTrap(arr);

    return 0;
}