#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i] + arr[j] == sum){
    //             cout<<i<<" "<<j;
    //             return 0;
    //         }
    //     }
    // }
    // cout<<"No such pair exists";

    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){   
        int rem = sum - arr[i];
        if(mp.find(rem) != mp.end()){
            cout<<mp[rem]<<" "<<i;
            return 0;
        }
        mp[arr[i]] = i;
    }
    return 0;
}

