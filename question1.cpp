// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;


// bool isPrime(int n){
//     unordered_map<int,bool> mp;

//     mp[2]=true;
//     mp[3]=true;
//     mp[5]=true;
//     mp[7]=true;
//     mp[11]=true;
//     mp[13]=true;
//     mp[17]=true;
//     mp[19]=true;
//     mp[23]=true;
//     mp[29]=true;
//     mp[31]=true;
//     mp[37]=true;

//     return mp[n];
// }

// bool isPerfectSquare(int n){
//     unordered_map<int,bool> mp;

//     mp[1]=true;
//     mp[4]=true;
//     mp[9]=true;
//     mp[16]=true;
//     mp[25]=true;
//     mp[36]=true;

//     return mp[n];
// }

// int main(){
//     int n;
//     cin >>n;

//     int arr[n];
//     int power_of_two =1;
//     int power_of_three =1;

//     for(int i=0;i<n;i++){
//         if(isPrime(i+1)){
//             arr[i]=power_of_two;
//             power_of_two *=2;
//         }
//         else if(isPerfectSquare(i+1)){
//             arr[i]=power_of_three;
//             power_of_three *=3;
//         }
//         else{
//             arr[i]=arr[i-1]+arr[i-2];
//         }
//     }
//     cout<<arr[n-1];
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n< 2) return false;
    for(int i=2;i*i <=n;i++){
        if(n %i ==0){
            return false;
        }
    }
    return true;
}

bool isPerfectSquare(int n){
    int root = sqrt(n);
    return root * root == n;
}

int main(){
    int n;
    cin >>n;

    if(n <=0) return false;

    int arr[n];

    int power_of_two =1;
    int power_of_three =1;

    for(int i=0;i<n;i++){
        if(isPrime(i+1)){
            arr[i]=power_of_two;
            power_of_two *=2;
        }
        else if(isPerfectSquare(i+1)){
            arr[i] = power_of_three;
            power_of_three *=3;
        }
        else{
            if(i >= 2)
                arr[i] = arr[i-1] + arr[i-2];
            else
                arr[i] = 1;
        }
    }
    cout<<arr[n-1];
    return 0;
}