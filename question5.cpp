#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=0;

    while(j<n){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}