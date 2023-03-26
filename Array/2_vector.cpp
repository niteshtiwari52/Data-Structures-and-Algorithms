// Vectors

// Problem :
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // write your code here

    // vector declartion
    vector<int> arr;

    int n;
    cout << "Enter number you want to insert : ";
    cin >> n;
    // input
    cout << "Enter the elements in the dynamic array : ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

       return 0;
}