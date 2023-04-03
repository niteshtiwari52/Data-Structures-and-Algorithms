// Problem : WAP to print the frequency of the sorted array

#include <iostream>
#include <vector>
using namespace std;

// Efficient Appraoch
// time complexity :
// Aux space :
void printFrequncy(vector<int> arr)
{
    int n = arr.size();
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " = " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << "=" << 1 << endl;
    }
}

int main()
{

    // Time Complexity

    // vector<int> arr{10, 10, 10, 25, 30, 30};
    vector<int> arr{10, 10, 10, 10, 10, 11};
    printFrequncy(arr);
    return 0;
}