#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int Total = (n*(n+1))/2;
    int sum = 0;

    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }
    cout<<Total - sum;
    return 0;
}