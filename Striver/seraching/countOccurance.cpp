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

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            count=1;
            int left = mid -1;
            while(left >=0 && arr[left] == key){
                count++;
                left--;
            }
            int right = mid +1;
            while(right < n && arr[right] == key){
                count++;
                right++;
            }
            break;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    cout<<count<<endl;
    return 0;
}