#include <iostream>
using namespace std;

void printN(int n,int s){
    if(n<1) {
        cout<<s;
        return ;
    }
    s=s+n;
    n--;
    printN(n,s);
}

int main()
{
    int num=0,sum=0;
    cin>>num;
    printN(num,sum);

    return 0;
}
