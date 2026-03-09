#include<bits/stdc++.h>
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

    int maxLength = 0;
    

    for(int i=0;i<n;i++){
        int Cursum = 0;
        for(int j=i;j<n;j++){
            Cursum += arr[j];
            if(Cursum == sum){
                maxLength = max(maxLength,j-i+1);
            }
        }
    }

    // unordered_map<int,int> mp;
    // int Cursum = 0;
    // for(int i=0;i<n;i++){
    //     Cursum+= arr[i];
    //     if(Cursum == sum){
    //         maxLength = max(maxLength,i+1);
    //     }
    //     int rem = Cursum - sum;
    //     if(mp.find(rem) != mp.end()){
    //         maxLength = max(maxLength,i - mp[rem]);
    //     }
    //     if(mp.find(Cursum) == mp.end()){
    //         mp[Cursum] = i;
    //     }
    // }
    cout<<maxLength;
    return 0;
   
}