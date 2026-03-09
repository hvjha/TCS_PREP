#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // sort(arr,arr+n);
    // cout<<arr[n-2]; 
    int largest = arr[0];
    int secondLargest = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    cout<<secondLargest;
    return 0;
}