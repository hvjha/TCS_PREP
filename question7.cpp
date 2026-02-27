#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target ;
    cin >> target;

    int i=0;
    int j=n-1;
    bool found = false; 
    while(i<m && j>=0){
        if(arr[i][j]==target){
            cout<<"Found at index: ("<<i<<","<<j<<")"<<endl;
            found = true;
            break;
        }
        else if(arr[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    if(!found){
        cout<<"Not Found"<<endl;
    }
    return 0;
}