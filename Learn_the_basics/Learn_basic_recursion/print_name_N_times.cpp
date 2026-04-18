#include <iostream>
using namespace std;

void printName(int n){
    cout<<"Prathmesh ";
    if(n==1){
        return ;
    }
    n--;
    printName(n);
}

int main()
{
    int num=0;
    cin>>num;
    printName(num);

    return 0;
}
