#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int coint = 0;
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            cout<<"Factor of Number "<<n<<" is "<<i<<endl;
            coint++;
        }  
    }
    cout<<"Total Number of Factors: "<<coint<<endl;
    return 0;
}

