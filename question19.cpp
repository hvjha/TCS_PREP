#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m){
    int i=0,j=0,k=0;
    int arr3[n+m];

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n){
        arr3[k++] = arr1[i++];
    }

    while(j<m){
        arr3[k++] = arr2[j++];
    }
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }
    
}
int main(){
    int n,m;
    cin>>n>>m;

    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    merge(arr1,arr2,n,m);
    
    return 0;
}