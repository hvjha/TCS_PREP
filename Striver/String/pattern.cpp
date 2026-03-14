#include<bits/stdc++.h>
using namespace std;
int main(){
    string pattern, text;
    cin>>pattern>>text;

    int m = pattern.size();
    int n = text.size();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(text[i+j] != pattern[j]){
                break;
            }
        }
        if(j == m){
            cout<<"Pattern found at index: "<<i<<endl;
        }
    }
    return 0;
}