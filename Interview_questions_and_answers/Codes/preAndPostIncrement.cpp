#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'A', 'B', 'C', 'D', 'E'};
    char* ptr = arr;

    ++ptr;
    cout << ++*ptr << " " << *--ptr << endl;

    return 0;
}
// prints C A
