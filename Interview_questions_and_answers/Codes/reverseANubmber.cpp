#include <iostream>
using namespace std;

void revNums(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    cout<<rev;
}

int main()
{
    int num = 1234;
    revNums(num);
    return 0;
}
