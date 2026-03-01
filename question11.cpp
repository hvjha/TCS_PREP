#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string n;
//     cin>>n;

//     int left =0;
//     int right=n.length()-1;

//     while(left<right){
//         if(n[left]!=n[right]){
//             cout<<"Not Palindrome"<<endl;
//             return 0;
//         }
//         left++;
//         right--;
//     }
//     cout<<"Palindrome"<<endl;
//     return 0;
// }

// int main(){
//     string s;
//     cin>>s;

//     string rev;
//     for(int i=s.length()-1;i>=0;i--){
//         rev+=s[i];
//     }
//     if(s==rev){
//         cout<<"Palindrome"<<endl;
//     }
//     else{
//         cout<<"Not Palindrome"<<endl;
//     }
//     return 0;
// }

int main(){
    string s;
    cin>>s;

    string rev = string(s.rbegin(),s.rend());

    if(s==rev){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}

