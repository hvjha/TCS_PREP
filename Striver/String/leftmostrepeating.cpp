#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

   for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i] == s[j]){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<"No repeating character found"<<endl;

    return 0;

}