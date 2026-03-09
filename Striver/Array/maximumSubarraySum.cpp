#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum =0;
    int maximumSum = INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum > maximumSum){
            maximumSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<maximumSum;
    return 0;
}