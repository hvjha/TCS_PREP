#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int leftSum[n];
    int rightSum[n];

    int equilibrumIndex = -1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left =0;

    for(int i=0;i<n;i++){
        leftSum[i]=left;
        left+=arr[i];
    }
    int right =0;
    for(int i=n-1;i>=0;i--){
        rightSum[i]=right;
        right+=arr[i];
    }
    for(int i=0;i<n;i++){
        if(leftSum[i]==rightSum[i]){
            equilibrumIndex = i;
            break;
        }
    }
    cout<<equilibrumIndex<<endl;
    return 0;
}

