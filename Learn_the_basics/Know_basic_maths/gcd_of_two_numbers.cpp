#include <iostream>
#include <math.h>
using namespace std;

//bruteforce approach
int gcdOf(int n1,int n2){
    int gcd = 1;
    for(int i=1;i<min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

//bruteforce approach 2
int gcdOf2(int n1,int n2){
    for(int i=min(n1,n2);i>0;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}
//Optimal Solution
int gcdOptimal(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    return n1;
}

int main()
{
    cout<<gcdOptimal(20,15);

    return 0;
}
