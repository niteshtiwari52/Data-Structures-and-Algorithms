// Problem : Trapping Rain water
#include <iostream>
#include <vector>
using namespace std;
// Time complexity = theta(n)
// Aux Space = theta(n)
int getMaximumWaterCanTrap(vector<int> &arr)
{
    int n = arr.size();
    int totalWater = 0;
    vector<int> L_Max(arr.size()), R_Max(arr.size());
    L_Max[0] = arr[0];
    // making the leftmax value array
    for (int i = 1; i < arr.size(); i++)
    {
        L_Max[i] = max(L_Max[i - 1], arr[i]);
    }
    // making the rightMAx array
    R_Max[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        R_Max[i] = max(R_Max[i + 1], arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        totalWater = totalWater + min(L_Max[i], R_Max[i]) - arr[i];
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