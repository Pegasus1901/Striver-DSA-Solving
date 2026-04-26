#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
void freqOfElements(int ar[],int s,int f){
    map<int,int>mp;
    for(int i=0;i<s;i++){
        mp[ar[i]]++;
    }
    cout << f << " " << mp[f] << endl;
}

void optimalApproach(int ar[],int s,int f){
    unordered_map<int,int> ump;
    
    for (int i = 0; i < s; i++) {
        ump[ar[i]]++;
    }
    cout << f << " " << ump[f] << endl;
}

int main()
{
    int s;
    cout<<"Size: ";
    cin>>s;
    int arr[s];
    
    for(int i=0;i<s;i++){
        int num;
        cout<<"val at " << i << ": "; 
        cin>>arr[i];
    }
    
    int f,q=s;
    while(q--){
        cout << "find: ";
        cin>>f;
        freqOfElements(arr,s,f);
        optimalApproach(arr,s,f);
    }
    

    return 0;
}
