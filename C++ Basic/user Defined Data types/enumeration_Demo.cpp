// Enumeration DEmo
#include <iostream>
using namespace std;
// // enumeraion type declaration
// enum Boolean
// {

//     false,
//     true
// } check;
enum week
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6

};

main()
{
    week today;
    today = wednesday;
    cout << today;
    return 0;
}