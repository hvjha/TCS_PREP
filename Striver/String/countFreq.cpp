#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    // int count[26] = {0};
    // for(int i=0;i<s.size();i++){
    //     count[s[i] - 'a']++;
    // }
    // for(int i=0;i<26;i++){
    //     if(count[i] > 0){
    //         cout<<(char)(i + 'a')<<" "<<count[i]<<endl;
    //     }
    // }

    unordered_map<char, int> freq;
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    for(auto it : freq){
        if(it.second > 0){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}