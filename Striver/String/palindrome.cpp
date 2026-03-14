#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    // string reversed = s;
    // reverse(reversed.begin(), reversed.end());

    // if(s == reversed){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not a Palindrome"<<endl;
    // }

    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        if(s[left] != s[right]){
            cout<<"Not a Palindrome"<<endl;
            return 0;
        }
        left++;
        right--;
    }

    cout<<"Palindrome"<<endl;
    return 0;
}