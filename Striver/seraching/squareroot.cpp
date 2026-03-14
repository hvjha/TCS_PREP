#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int low = 0;
    int high = n;
    int ans = -1;

    while(low <=high){
        int mid = low + (high - low)/2;
        int sqr = mid * mid;
        if(sqr == n){
            cout << mid;
            return 0;
        }
        else if (sqr < n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    cout << ans;
    return 0;
}