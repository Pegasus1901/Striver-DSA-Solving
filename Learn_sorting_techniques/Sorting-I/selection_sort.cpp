#include <iostream>
using namespace std;

class StriverSolution{
    public:
        void selection_sort(int arr[], int s){
            for(int i=0; i<=s-2;i++){
                int min=i;
                for(int j=i;j<=s-1;j++){
                    if(arr[min]>arr[j]){
                        min=j;
                    }
                }
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i]=temp;
            }
        }
};

int main()
{
    int arr[5]={3,4,5,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    Solution sol;
    sol.selection_sort(arr,size);
    for(int i:arr){
        cout<< i << " ";
    }

    return 0;
}
