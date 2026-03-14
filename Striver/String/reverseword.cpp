#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    // Reverse the entire string
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    // Reverse each word in the string
    stringstream ss(s);
    string word;

    while(ss >> word){
        reverse(word.begin(), word.end());
        cout<<word<<" ";
    }
    cout<<endl;

    // Reverse the order of words in the string
    vector<string> words;
    stringstream ss2(s);
    while(ss2 >> word){
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    for(string w : words){
        cout<<w<<" ";
    }
    cout<<endl;


    return 0;

}