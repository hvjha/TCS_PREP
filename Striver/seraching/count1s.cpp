#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int low = 0;
    int high = n-1;
    int count = 0;

    while (low <=high){
        int mid = low + (high -low)/2;
        if(arr[mid] == key){
            if(mid ==0 || arr[mid-1] !=key){
                cout << n - mid;
                return 0;
            }
            else{
                high = mid -1;
            }
        }
        else if(arr[mid] < key){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    cout <<" Not Found";
    return 0;


}