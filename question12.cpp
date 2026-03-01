#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int Total = n*(n+1)/2;
    int sum =0;

    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int missing = Total - sum;
    cout<<"Missing number is: "<<missing<<endl; 
    return 0;
}