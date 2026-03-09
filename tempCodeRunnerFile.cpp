#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,R;
    cin>>L>>R;

    for(int i=L;i<=R;i++){
        if(i%7==0 && i%5!=0){
            cout<<i<<" ";
        }
    }
    return 0;
}