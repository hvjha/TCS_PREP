#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int key;
    cin>>key;

    for(int i=0; i<str.length(); i++){
        if(str[i]>=65 && str[i]<=90){
            int index = str[i]-'A';
            int newIndex = (index+key)%26;
            str[i]=newIndex+'A';
        }
        else if(str[i]>=97 && str[i]<=122){
            int index = str[i]-'a';
            int newIndex = (index+key)%26;
            str[i]=newIndex+'a';
        }
        else{
            int index = str[i]-'0';
            int newIndex = (index+key)%10;
            str[i]=newIndex+'0';
        }
    }
    cout<<str;
    return 0;
}