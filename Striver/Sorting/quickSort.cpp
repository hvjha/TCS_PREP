#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int low = 0;
        int high = n-1;
        int pivot = arr[i];
        while(low < high){
            while(arr[low] <= pivot && low < high){
                low++;
            }
            while(arr[high] > pivot && low < high){
                high--;
            }
            if(low < high){
                swap(arr[low], arr[high]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}