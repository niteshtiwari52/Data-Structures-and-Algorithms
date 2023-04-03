// Problem : WAP to print the leaders in an array.
// leaders means no element should be greater in the right side of an element.
#include <iostream>
#include <vector>
using namespace std;

// Efficient Appraoch - printt from the last
// time complexity : theta(n)
// Aux space :theta(1)
void printLeaders(vector<int> arr)
{
    int n = arr.size();
    // last element will alwayse be leader and print that firstly
    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";
    // now form n-2 -> 0 check any element is greater than current leader if found  any then meake them leader
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout << arr[i] << " ";
        }
    }
}

int main()
{

    // Time Complexity

    vector<int> arr{-3, 7, -3, -2};
    printLeaders(arr);
    return 0;
}