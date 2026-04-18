#include <iostream>
using namespace std;

void printName(int n){
    if(n==0){
        return ;
    }
    n--;
    cout<<"Prathmesh ";
    printName(n);
}

int main()
{
    int num=0;
    cin>>num;
    printName(num);

    return 0;
}
