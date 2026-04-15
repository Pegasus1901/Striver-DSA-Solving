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
    int count = (int)(log10(n)+1);
    cout<<count;
}

int main(){
    int num;
    cin>>num;
    // bruteForceApproach(num);
    optimalApproach(num);
}
