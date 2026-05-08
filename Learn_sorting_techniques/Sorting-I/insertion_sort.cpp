#include <iostream>
using namespace std;
void swap(int arr[], int j){
    int temp=arr[j];
    arr[j]=arr[j-1];
    arr[j-1]=temp;
}

void insertion_sort(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr,j);
            j--;
        }
    }
}

int main()
{
    int arr[]={1,3,2,5,4};
    int size = 5;
    insertion_sort(arr,size);
    for(int i: arr){
        cout << i << " " ;
    }

    return 0;
}
