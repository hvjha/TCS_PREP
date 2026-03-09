#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){
    int left = 0;
    int right = s.size()-1;

    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    int L,R;
    cin>>L>>R;
    for(int i=L;i<=R;i++){
        if(i%7==0 && i%5!=0 && !checkPalindrome(to_string(i))){
            cout<<i<<" ";
        }
    }
    return 0;
}