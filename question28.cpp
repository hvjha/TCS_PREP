#include<bits/stdc++.h>
using namespace std;

// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//     return 0;
// }

int main(){
    int n;
    cin>>n;

    if(n<=1){
        cout<<n<<endl;
        return 0;
    }
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c = a+b;
        a=b;
        b=c;
    }
    cout<<c<<endl;
    return 0;
}