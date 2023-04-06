/*
there are 4 segments in the memory
1. Code :-  Execution instruction
2.  Static/Global   :-  static/Global variables
3. Stacl    :-  Function Call , local variables
all the above has fixed size
4. Heap :- Dynamic Memory


# Stack :

when the memory is flow - memory overflow
when the new memory is allocated and lose the address of previous dynamically allocated memory  in the heap - memory Leak

# Drawback : stack
->  Fixed Size
->  Allocation / Deallocation automatically
->  size of the array should be specified before compilation process, run time is not possible


#Heap
->  Flexible size
->  Allocation / Deallocation is done manually
->  Dynamic memory allocation can be done by
    1.malloca
    2.new
    3.calloc
    4.free
    5.delete
    6.relloc

    int a ;
    int * p = (int * ) malloc(sizeof(int));

    p = (int *) malloc(100*sizeof(int));

    free(p);
*/

// Problem :
#include <iostream>
using namespace std;

// Global varibles - memory in static/global
int sum_of_numbers = 0;

// function - allocated in stack
void sum_of_digits(int number)
{
    while (number > 0)
    {
        int n = number % 10;
        sum_of_numbers = sum_of_numbers + n;
        number /= 10;
    }
}

// in Stack
int main()
{
    // write your code here
    int number = 789;
    sum_of_digits(number);
    cout << "Sum of digits=" << sum_of_digits;
    return 0;
}