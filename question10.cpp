#include <bits/stdc++.h>
using namespace std;

// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     if (s1 == s2)
//         cout << "Anagram" << endl;
//     else
//         cout << "Not Anagram" << endl;

//     return 0;
// }

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    unordered_map<char,int> mp;

    for(char c : s1){
        mp[c]++;
    }

    for(char c : s2){
        mp[c]--;
    }

    for(auto it :mp){
        if(it.second!=0){
            cout<<"Not Anagram"<<endl;
            return 0;
        }
    }

    cout << "Anagram" << endl;
    return 0;
}