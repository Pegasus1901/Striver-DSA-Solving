#include <iostream>
using namespace std;

void printN(int n){
    if(n<1) return ;
    cout << n;
    n--;
    printN(n);
}

int main()
{
    int num=0,i=1;
    cin>>num;
    printN(num);

    return 0;
}
