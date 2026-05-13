#include <iostream>
#include <array>
using namespace std;

//These codes are for Ascending Sorting, By changing only the comparator I can achieve descending

void selectionSortAscending(array<int,5>& arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

void insertionSortAscending(array<int,5>& arr){
    for(int i=1;i<arr.size();i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
        }
    }
}

void bubbleSortAscending(array<int,5>& arr){
    for(int i=0;i<arr.size()-1;i++){
        int flag=0;
        for(int j =0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

void mergeSortAscending(array<int,5>& arr){
    //Pending to learn this
}

int main()
{
    array<int,5> arr{1,9,2,8,3};
    // selectionSortAscending(arr);
    // insertionSortAscending(arr);
    // bubbleSortAscending(arr);
    // mergeSortAscending(arr);
    for(int i:arr){
        cout<< i << " ";
    }
    return 0;
}
