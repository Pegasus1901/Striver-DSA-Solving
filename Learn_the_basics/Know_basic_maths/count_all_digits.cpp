#include<iostream>
#include<math.h>
using namespace std;

void bruteForceApproach(int n){
    int count=0;
     while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
}
void optimalApproach(int n){
    //log10 returns the power of 10 required to match the input number and then convert it to int to ignore decimal.
    //ex- 123*log10 = 2.3 => +1 => 3.2 => 3
    int count = (int)(log10(n)+1);
    cout<<count;
}

int main(){
    int num;
    cin>>num;
    // bruteForceApproach(num);
    optimalApproach(num);
}
