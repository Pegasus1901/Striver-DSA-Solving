#include <iostream>
#include <math.h>
using namespace std;

void primeNumber(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Not a prime";
    }else{
        cout<<"prime";
    }
}

void primeOptimal(int n){
    int count = 0;
    
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            count++;
        }
        if (n/i != i) {
            count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }else{
        cout<<"not a prime";
    }
}

int main()
{
    primeOptimal(30);
    return 0;
}
