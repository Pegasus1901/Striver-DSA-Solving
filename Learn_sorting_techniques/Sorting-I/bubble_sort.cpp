#include <iostream>
using namespace std;
void swap(int arr[], int j){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}

void bubble_sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j);
            }
        }
    }
}

int main()
{
    int arr[]={1,3,2,5,4};
    int size = 5;
    bubble_sort(arr,size);
    for(int i: arr){
        cout << i << " " ;
    }

    return 0;
}
