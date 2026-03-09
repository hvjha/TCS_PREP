#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool inc = true;
    bool dec = true;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            inc = false;
        }
        if(arr[i] > arr[i-1]){
            dec = false;
        }
    }
    if(inc || dec){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}