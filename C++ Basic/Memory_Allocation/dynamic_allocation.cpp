// Dynamic Allocation

#include <iostream>
using namespace std;
int main()
{
    // using new and delete;
    int *p = new int;
    delete p;

    p = new int;
    *p = 20;

    delete (p);

    // using calloc and realloc
    int *arr = (int *)calloc(4, sizeof(int)); // intialize the contiguios memory with default value zero.

    // arr = (int *)realloc(arr, 2 * size, *sizeof(int));

    delete (arr);
    return 0;
}