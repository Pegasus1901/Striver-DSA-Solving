#include <iostream>
#include <array>
#include<algorithm>
using namespace std;

class Solution{
    public:
    // One more method is to copy the current array to new array from end (not written here)
    void reverseArray(array<int,5> arr){
        int length = arr.size()-1;
        for(int i=0;i<length/2;i++){
            int temp=arr[i];
            arr[i]=arr[length-i];
            arr[length-i] = temp;
        }
        for(int i:arr){
            cout<<i<< " ";
        }
        cout<<endl;
    }
    
    void reverseArrayUsingPointers(array<int,5> arr){
        int length = arr.size()-1;
        int p1 = 0;
        int p2 = arr.size()-1;
        while(p1<p2){
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }
        for(int i:arr){
            cout<<i<< " ";
        }
        cout<<endl;
    }
    
    void reverseArrayUsingLibrary(array<int,5> arr){
        reverse(arr.begin(),arr.end());
        for(int i:arr){
            cout<<i<< " ";
        }
        cout<<endl;
    }
    
};
int main()
{
    array<int,5>arr {5,4,3,2,1};
    Solution sol;
    sol.reverseArray(arr);
    sol.reverseArrayUsingPointers(arr);
    sol.reverseArrayUsingLibrary(arr);
    return 0;
}
