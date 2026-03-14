#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(s1.length() != s2.length()){
        cout<<"Not Anagrams"<<endl;
        return 0;
    }

    // int count[26] = {0};
    // for(int i=0;i<s1.length();i++){
    //     count[s1[i] - 'a']++;
    //     count[s2[i] - 'a']--;
    // }
    // for(int i=0;i<26;i++){
    //     if(count[i] != 0){
    //         cout<<"Not Anagrams"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"Anagrams"<<endl;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2){
        cout<<"Anagrams"<<endl;
    }
    else{
        cout<<"Not Anagrams"<<endl; 
    }
    return 0;
}