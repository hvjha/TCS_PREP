#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int DigitSum = 0;

    while(n>0){
        int digit = n%10;
        DigitSum += digit;
        n /= 10;
    }
    cout<<DigitSum<<endl;
    return 0;
}