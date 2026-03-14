#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

        // for(int i=0;i<s.size();i++){
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
    
        // for(int i=s.size()-1;i>=0;i--){
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
    
        // for(int i=0;i<s.size();i++){
        //     if(s[i] >= 'a' && s[i] <= 'z'){
        //         s[i] = s[i] - ('a' - 'A');
        //     }
        // }
    
        // cout<<s<<endl;

    cout<<s.length()<<endl;

    s += " World";

    cout << s << endl;

    cout<<s.substr(0, 3)<<endl;

    cout<<s.find("eek")<<endl;
    
        return 0;
}