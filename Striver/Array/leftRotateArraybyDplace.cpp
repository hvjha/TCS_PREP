#include<iostream>
using namespace std;

void reverseArr(int arr[], int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    d = d%n;
    // int temp[d];
    // for(int i=0;i<d;i++){
    //     temp[i] = arr[i];
    // }
    // for(int i=d;i<n;i++){
    //     arr[i-d] = arr[i];
    // }
    // for(int i=n-d;i<n;i++){
    //     arr[i] = temp[i-(n-d)];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    reverseArr(arr,0,d-1);
    reverseArr(arr,d,n-1);   
    reverseArr(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}