#include <iostream>
#include <vector>
using namespace std;

void totalDivisorsOf(int n){
    if(n<0){
        cout<< "Less than 0" ;
    }
    vector<int> divisors;
    int num=n;
    
    for(int i=1;i<=n;i++){
        if(num%i==0){
            divisors.emplace_back(i);
        }
    }
    for(int i:divisors){
        cout<<i<<" ";
    }
}

vector<int> allDivisorsOptimal(int n){
    vector<int> res;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            res.emplace_back(i);
            if(i!=n/i){
                res.emplace_back(n/i);
            }
        }
    }
    return res;
}

int main()
{
    totalDivisorsOf(-12);
    return 0;
}
