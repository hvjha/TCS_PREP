#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==0){
        cout <<"Factorial is not defined for "<<n<<endl;
        return 0;
    }
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    cout <<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}