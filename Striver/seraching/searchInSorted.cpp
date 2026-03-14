#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    // for(int i=0;i<n;i++){
    //     if (arr[i] == x){
    //         cout<<i;
    //         return 0;
    //     }
    // }

    int low =0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == x){
            cout<<mid;
            return 0;
        }
       if(arr[low] <= arr[mid]){
            if(x >= arr[low] && x < arr[mid]){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
       }
       else{
        if(x > arr[mid] && x <= arr[high]){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
       }
    }
    cout<<"-1";
    return 0;
}