#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n]; // to store the original array
    unordered_map<int,int> mp;
    int rank =1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(!mp.count(arr[i])){
            mp[arr[i]]=rank;
            rank+=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<mp[brr[i]]<<" ";
    }
    return 0;
}