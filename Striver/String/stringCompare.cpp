#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;

    int result = s1.compare(s2);

    if(result == 0){
        cout<<"Strings are equal"<<endl;
    }
    else if(result < 0){
        cout<<"String 1 is smaller than String 2"<<endl;
    }
    else{
        cout<<"String 1 is greater than String 2"<<endl;
    }
    return 0;
}