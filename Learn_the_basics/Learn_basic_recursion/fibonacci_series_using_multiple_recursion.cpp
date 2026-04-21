#include <iostream>
using namespace std;

class Solution{
    public:
    void fibonacciSeriesBasic(int n){
        if(n==0){
            cout<<0;
        }
        else if(n==1){
            cout << 0 <<" "<< 1;
        }
        else{
            int fib[n+1];
            fib[0]=0;
            fib[1]=1;
            
            for(int i=2;i<n;i++){
                fib[i]=fib[i-1]+fib[i-2];
            }
            
            //printing Fibonacci Series
            for(int i =0;i<n;i++){
                cout<< fib[i] << " ";
            }
            
        }
    }
    void fibonacciBetterApproach(int n){
        if(n==0){
            cout<<0;
        }else{
            int secondLast =0;
            int last=1;
            
            cout<<secondLast<<" "<<last<<" ";
            
            int curr;
            for(int i=2;i<n;i++){
                curr=last+secondLast;
                secondLast=last;
                last=curr;
                cout<< curr << " ";
            }
        }
    }
    
    int fibonacciOptimalApproach(int n){
        if (n <= 1) {
            return n;
        }
        int last = fibonacciOptimalApproach(n-1);
        int sLast = fibonacciOptimalApproach(n-2);
        
        return last+sLast;
    }
    
};
int main()
{
    int n=5;
    
    Solution sol;
    sol.fibonacciSeriesBasic(n);
    cout<<endl;
    sol.fibonacciBetterApproach(n);
    cout<<endl;
    cout << sol.fibonacciOptimalApproach(n);
    cout<<endl;

    return 0;
}
