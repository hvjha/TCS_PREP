#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        bool isRepeating = false;
        for(int j=0;j<s.size();j++){
            if(i != j && s[i] == s[j]){
                isRepeating = true;
                break;
            }
        }
        if(!isRepeating){
            cout<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"No non-repeating character found"<<endl;
    return 0;

}