#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxCount = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
        } else {
            count = 0;
        }
        maxCount = max(maxCount,count);
    }
    cout<<maxCount;
    return 0;
}