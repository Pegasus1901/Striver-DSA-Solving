#include <iostream>
using namespace std;

void revArray(int arry[],int s){
    int temp=0;
    for(int i=0;i<s/2;i++){
        temp = arry[i];
        arry[i]=arry[s-1-i];
        arry[s-1-i]=temp;
    }
    for(int i = 0; i < s; i++){
        cout<<arry[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    revArray(arr,s);
    return 0;
}
