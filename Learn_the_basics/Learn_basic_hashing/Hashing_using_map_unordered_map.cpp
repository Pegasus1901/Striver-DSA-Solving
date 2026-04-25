#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    map<int,int> mpp;
    unordered_map<int,int> unmpp; // --> Time complexity is O(1) for best and O(N) for linear worst case.
    for(int i=0;i<n;arr++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    //map stores in sorted order data
    //map time complexity for (storing and fetching) is *LogN* in all cases
    // map<int,int> mpp;
    
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }
    
    for (int i = 0; i < n; i++) {
        cout<<mpp.first<<"->"<<mpp.second<<endl;
    }
    
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}
