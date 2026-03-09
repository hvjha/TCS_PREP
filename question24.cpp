#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    cout <<"Third Largest Element: "<<arr[n-3]<<endl;
    return 0;
}