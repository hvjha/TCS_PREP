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
    // cout<<arr[1]; 
    int smallest = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<smallest;
    return 0;
}