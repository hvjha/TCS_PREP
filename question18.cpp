#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    k=k%n;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k); 
    reverse(arr.begin()+k,arr.end());
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}