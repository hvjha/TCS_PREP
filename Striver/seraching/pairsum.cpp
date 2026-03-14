#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int value;
    cin>>value;
    int low = arr[0];
    int high = arr[n-1];

    while (low <= high){
        int sum = low + high;
        if(sum == value){
            cout<<low<<" "<<high;
            return 0;
        }
        else if (sum < value){
            low++;
        }
        else{
            high--;
        }
    }
    cout<<"No pair found";
    return 0;
}