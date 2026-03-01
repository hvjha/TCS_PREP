#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }

    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        int complement = target - arr[i];
        if(mp.find(complement)!=mp.end()){
            cout<<"Found at index: ("<<mp[complement]<<","<<i<<")"<<endl;
            return 0;
        }
        mp[arr[i]]=i;
    }

    cout<<"Not Found"<<endl;
    return 0;
}