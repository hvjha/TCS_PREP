#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    stack<char>st;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                cout<<"Not Balanced"<<endl;
                return 0;
            }
            char top = st.top();
            if(ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '['){
                st.pop();
            }
            else{
                cout<<"Not Balanced"<<endl;
                return 0;
            }
        }
    }
    if(st.empty()){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }

    return 0;
}