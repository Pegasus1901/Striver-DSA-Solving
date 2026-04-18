#include <iostream>
using namespace std;

void printN(int i,int n){
    if(i>n) return ;
    cout << i;
    i++;
    printN(i,n);
}

int main()
{
    int num=0,i=1;
    cin>>num;
    printN(i,num);

    return 0;
}
