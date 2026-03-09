#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // unordered_set<int>s;
    // for(int i=0;i<n;i++){
    //     s.insert(arr[i]);
    // }
    // int index = 0;
    // for(auto it : s){
    //     arr[index] = it;
    //     index++;
    // }
    // for(int i=index-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    int i =0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}