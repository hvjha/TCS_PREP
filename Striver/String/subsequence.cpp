#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int j =0,i=0;
    for(int i=0;i<s1.size() && j<s2.size();i++){
        if(s1[i] == s2[j]){
            j++;
        }
    }
    if(j == s2.size()){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;        
}